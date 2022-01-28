// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "engine-epam-iOS",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "engine-epam-iOS",
            targets: ["engine-epam-iOS"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "engine-epam-iOS",
            path: "./engine-epam-iOS.xcframework"
        ),
    ]
)
