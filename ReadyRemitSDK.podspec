Pod::Spec.new do |spec|
    spec.name         = "ReadyRemitSDK"
    spec.version      = "5.0"
    spec.summary      = "The latest version of ReadyRemitSDK. A Brightwell SDK"

    spec.description  = "ReadyRemit is a powerful solution for global remittances that helps you quickly and seamlessly integrate cross-border transfers into your product via API or SDK. Our SDK offers an end-to-end flow for submitting a transfer request, making it easy to get up and running with minimal development time. Additionally, our API offers complete flexibility and control over the user flow for more advanced use cases."
    spec.homepage     = "https://developer.readyremit.com/"

    spec.license         = {
    :type => 'commercial',
    :text => <<-LICENSE
    Copyright 2023 Brightwell, Inc. All Rights Reserved.
    LICENSE
    }

    spec.authors       = { "Brightwell" => "lucas.bordini@hotmail.com" }

    spec.source       = { :git => "https://github.com/lucasbordini/teste.git", :tag => 'v2.0' }

    spec.platform     = :ios, "14.0"

    spec.vendored_frameworks = 'Sources/VisaSensoryBranding.xcframework', 'Sources/ReadyRemitSDK.xcframework', 'Sources/ScanForensicsPlus.xcframework', 'Sources/AcuantCamera.xcframework', 'Sources/AcuantCommon.xcframework', 'Sources/AcuantFaceCapture.xcframework', 'Sources/AcuantImagePreparation.xcframework', 'Sources/AcuantPassiveLiveness.xcframework', 'Sources/TesseractOCR.xcframework',

    spec.swift_version = '5.0'

end
