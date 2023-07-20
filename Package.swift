// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "ReadyRemitSDKPackage",
    products: [
        .library(
            name: "ReadyRemitSDK",
            targets: ["ReadyRemitSDK"]
        ),
    ],
    dependencies: [
        .binaryTarget(
            name: "AcuantCamera",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/AcuantCamera.xcframework.zip",
            from: "0.0.0"
        ),
        .binaryTarget(
            name: "AcuantCommon",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/AcuantCommon.xcframework.zip",
            from: "0.0.0"
        ),
        .binaryTarget(
            name: "AcuantFaceCapture",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/AcuantFaceCapture.xcframework.zip",
            from: "0.0.0"
        ),
        .binaryTarget(
            name: "AcuantImagePreparation",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/AcuantImagePreparation.xcframework.zip",
            from: "0.0.0"
        ),
        .binaryTarget(
            name: "AcuantPassiveLiveness",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/AcuantPassiveLiveness.xcframework.zip",
            from: "0.0.0"
        ),
        .binaryTarget(
            name: "ScanForensicsPlus",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/ScanForensicsPlus.xcframework.zip",
            from: "0.0.0"
        ),
        .binaryTarget(
            name: "TesseractOCR",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/TesseractOCR.xcframework.zip",
            from: "0.0.0"
        ),
        .binaryTarget(
            name: "VisaSensoryBranding",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/VisaSensoryBranding.xcframework.zip",
            from: "0.0.0"
        ),
    ],
    targets: [
        .binaryTarget(
            name: "ReadyRemitSDK",
            url: "https://github.com/lucasbordini/teste/raw/main/Sources/ReadyRemitSDK.xcframework.zip",
            from: "0.0.0"
        ),
    ]
)
