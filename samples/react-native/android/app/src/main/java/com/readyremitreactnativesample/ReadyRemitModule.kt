package com.readyremitreactnativesample

import com.brightwell.readyremit.sdk.*
import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.bridge.ReactContextBaseJavaModule
import com.facebook.react.bridge.ReactMethod
import com.facebook.react.bridge.ReadableMap
import com.facebook.react.modules.core.DeviceEventManagerModule
import com.google.gson.Gson
import kotlinx.coroutines.*

class ReadyRemitModule(reactContext: ReactApplicationContext) : ReactContextBaseJavaModule(reactContext) {
    private val REQUEST_CODE = 10
    private val READYREMIT_AUTH_TOKEN_REQUESTED = "READYREMIT_AUTH_TOKEN_REQUESTED"
    private val READYREMIT_TRANSFER_SUBMITTED = "READYREMIT_TRANSFER_SUBMITTED"
    private lateinit var _onAuthCallback: ReadyRemitAuthCallback
    private lateinit var _onTransferCallback: ReadyRemitTransferCallback
    private var waitForTransfer : Job? = null

    override fun getName(): String {
        return "ReadyRemitModule"
    }

    @ReactMethod
    fun launch(environment: String, language: String = "en", style: ReadableMap? = null) {
        ReadyRemit.initialize(
            ReadyRemit.Config.Builder(currentActivity!!.application)
                .useEnvironment(if(environment == "PRODUCTION") Environment.PRODUCTION else Environment.SANDBOX)
                .useAuthProvider { callback -> requestReadyRemitAccessToken(callback) }
                .useTransferSubmitProvider  { request, callback -> submitReadyRemitTransfer(request, callback) }
                .useDefaultTheme(R.style.Base_Theme_ReadyRemit_Light)
                .useLanguage(language)
                .build()
        )

        ReadyRemit.remitFrom(currentActivity!!, REQUEST_CODE, R.style.Base_Theme_ReadyRemit_Light, language)
    }

    @ReactMethod
    fun setAuthToken(token: String, errorAuthCode: String?) {
        if (token != "") {
            _onAuthCallback.onAuthSucceeded(ReadyRemitAuth(token, ""))
        } else {
            _onAuthCallback.onAuthFailed()
        }
    }

    private fun requestReadyRemitAccessToken(callback: ReadyRemitAuthCallback) {
        runBlocking {
            _onAuthCallback = callback

            reactApplicationContext
                .getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter::class.java)
                .emit(READYREMIT_AUTH_TOKEN_REQUESTED, null)
        }
    }

    @ReactMethod
    fun setTransferId(transferId: String = "", errorCode: String? = "", errorMessage: String? = "") {
        if (transferId != "") {
            _onTransferCallback.onTransferSucceeded(transferId)
        } else if (errorCode != null) {
            val error = ReadyRemitError(errorCode, errorMessage ?: "", errorMessage ?: "")
            _onTransferCallback.onTransferFailed(error)
        }
    }

    private suspend fun submitReadyRemitTransfer(
        request: ReadyRemitTransferRequest,
        callback: ReadyRemitTransferCallback
    ) {
        coroutineScope {
            waitForTransfer = launch {
                repeat(20) {
                    delay(1_000L)
                }
            }

            _onTransferCallback = callback

            var jsonRequest = Gson().toJson(request)

            reactApplicationContext
                .getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter::class.java)
                .emit(READYREMIT_TRANSFER_SUBMITTED, jsonRequest)
        }
    }
}