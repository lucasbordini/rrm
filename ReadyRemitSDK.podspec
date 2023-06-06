Pod::Spec.new do |spec|
    spec.name         = "ReadyRemitSDK"
    spec.version      = "5.0"
    spec.summary      = "The latest version of ReadyRemitSDK. A Brightwell SDK"

    spec.description  = "A short description of ReadyRemitSDK. bbebebbebebebebebbebebebebebbebebe"
    spec.homepage     = "https://developer.readyremit.com/"

    spec.license         = {
    :type => 'commercial',
    :text => <<-LICENSE
    Copyright 2023 Brightwell, Inc. All Rights Reserved.
    LICENSE
    }

    spec.authors       = { "Brightwell" => "lucas.bordini@hotmail.com" }

    spec.source       = { :git => "https://github.com/BrightwellPayments/readyremit-sdk-ios.git", :tag => 'v4.0' }

    spec.platform     = :ios, "14.0"

    spec.vendored_frameworks = 'Sources/VisaSensoryBranding.xcframework', 'Sources/ReadyRemitSDK.xcframework', 'Sources/ScanForensicsPlus.xcframework'

    spec.swift_version = '5.0'

    spec.dependency 'AcuantiOSSDKV11/AcuantCamera', '11.5.6'
    spec.dependency 'AcuantiOSSDKV11/AcuantFaceCapture', '11.5.6'
    spec.dependency 'AcuantiOSSDKV11/AcuantCommon', '11.5.6'
    spec.dependency 'AcuantiOSSDKV11/AcuantImagePreparation', '11.5.6'
    spec.dependency 'AcuantiOSSDKV11/AcuantPassiveLiveness', '11.5.6'

end
