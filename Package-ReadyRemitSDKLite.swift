// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "ReadyRemitSDKLitePackage",
    products: [
        .library(
            name: "ReadyRemitSDK",
            targets: ["ReadyRemitSDK", "VisaSensoryBranding"]
        ),
    ],
    dependencies: [
        
    ],
    targets: [
        .binaryTarget(
            name: "ReadyRemitSDK",
            url: "https://github.com/lucasbordini/rrm/raw/main/Sources/ReadyRemitSDK.xcframework.zip",
            checksum: "b2ac3a9c0b2a1dff9b34059a255adb4271068628ab7e664a2d1cb8c79d63b63e"
        ),
        .binaryTarget(
            name: "VisaSensoryBranding",
            url: "https://github.com/lucasbordini/rrm/raw/main/Sources/VisaSensoryBranding.xcframework.zip",
            checksum: "056ee1189d6a3b26c33973eae2328a13ad1e6f2511223dc6f6863f17fb8d953a"
        )
    ]
)
