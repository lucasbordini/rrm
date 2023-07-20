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
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/AcuantCamera.xcframework.zip",
            from: "1.0.0"
        ),
        .binaryTarget(
            name: "AcuantCommon",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/AcuantCommon.xcframework.zip",
            from: "1.0.0"
        ),
        .binaryTarget(
            name: "AcuantFaceCapture",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/AcuantFaceCapture.xcframework.zip",
            from: "1.0.0"
        ),
        .binaryTarget(
            name: "AcuantImagePreparation",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/AcuantImagePreparation.xcframework.zip",
            from: "1.0.0"
        ),
        .binaryTarget(
            name: "AcuantPassiveLiveness",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/AcuantPassiveLiveness.xcframework.zip",
            from: "1.0.0"
        ),
        .binaryTarget(
            name: "ScanForensicsPlus",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/ScanForensicsPlus.xcframework.zip",
            from: "1.0.0"
        ),
        .binaryTarget(
            name: "TesseractOCR",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/TesseractOCR.xcframework.zip",
            from: "1.0.0"
        ),
        .binaryTarget(
            name: "VisaSensoryBranding",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/VisaSensoryBranding.xcframework.zip",
            from: "1.0.0"
        ),
    ],
    targets: [
        .binaryTarget(
            name: "ReadyRemitSDK",
            url: "https://github.com/lucasbordini/teste/blob/main/Sources/ReadyRemitSDK.xcframework.zip",
            from: "1.0.0"
        ),
    ]
)
