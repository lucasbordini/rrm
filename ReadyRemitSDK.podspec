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

  spec.author       = "Brightwell"

  spec.source       = { :git => "https://github.com/BrightwellPayments/readyremit-sdk-ios.git", :tag => "#{spec.version}" }

  spec.platform     = :ios, "14.0"

  spec.vendored_frameworks = 'Sources/ReadyRemitSDK.xcframework'
  
  spec.swift_version = '5.0'

  spec.subspec 'VisaSensoryBranding' do |visa|
    visa.ios.deployment_target = '14.0'
    visa.ios.vendored_frameworks = 'Sources/VisaSensoryBranding.xcframework'
  end


  spec.subspec 'ScanForensicsPlus' do |scanForensicsPlus|
    scanForensicsPlus.ios.deployment_target = '14.0'
    scanForensicsPlus.ios.vendored_frameworks = 'Sources/ScanForensicsPlus.xcframework'
  end

end
