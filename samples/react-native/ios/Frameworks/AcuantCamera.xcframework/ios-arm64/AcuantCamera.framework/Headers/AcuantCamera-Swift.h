// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef ACUANTCAMERA_SWIFT_H
#define ACUANTCAMERA_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreGraphics;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AcuantCamera",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class CameraOptions;
@class AcuantMrzResult;
enum MrzCameraState : NSInteger;
@class NSString;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC12AcuantCamera25AcuantMrzCameraController")
@interface AcuantMrzCameraController : UIViewController
@property (nonatomic, strong) CameraOptions * _Null_unspecified options;
@property (nonatomic, copy) void (^ _Nullable callback)(AcuantMrzResult * _Nullable);
@property (nonatomic, copy) NSString * _Nonnull (^ _Nonnull customDisplayMessage)(enum MrzCameraState);
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)exitTimer;
- (void)onMrzParsedWithResult:(AcuantMrzResult * _Nonnull)result;
- (BOOL)isDocumentMovedWithNewPoints:(NSArray<NSValue *> * _Nonnull)newPoints SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MrzCameraState, open) {
  MrzCameraStateNone = 0,
  MrzCameraStateAlign = 1,
  MrzCameraStateMoveCloser = 2,
  MrzCameraStateTooClose = 3,
  MrzCameraStateGood = 4,
  MrzCameraStateCaptured = 5,
};

@class AVCaptureDevice;
@class AVCaptureOutput;
@class AVCaptureConnection;

SWIFT_CLASS("_TtC12AcuantCamera23AcuantMrzCaptureSession")
@interface AcuantMrzCaptureSession : AVCaptureSession <AVCaptureVideoDataOutputSampleBufferDelegate>
- (nonnull instancetype)initWithCaptureDevice:(AVCaptureDevice * _Nonnull)captureDevice userCallback:(void (^ _Nullable)(enum MrzCameraState, AcuantMrzResult * _Nullable, NSArray<NSValue *> * _Nullable))userCallback OBJC_DESIGNATED_INITIALIZER;
- (void)start;
- (void)captureOutput:(AVCaptureOutput * _Nonnull)output didOutputSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer fromConnection:(AVCaptureConnection * _Nonnull)connection;
- (void)stopCamera;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12AcuantCamera15AcuantMrzResult")
@interface AcuantMrzResult : NSObject
@property (nonatomic, copy) NSString * _Nonnull surName;
@property (nonatomic, copy) NSString * _Nonnull givenName;
@property (nonatomic, copy) NSString * _Nonnull country;
@property (nonatomic, copy) NSString * _Nonnull passportNumber;
@property (nonatomic, copy) NSString * _Nonnull nationality;
@property (nonatomic, copy) NSString * _Nonnull dob;
@property (nonatomic, copy) NSString * _Nonnull gender;
@property (nonatomic, copy) NSString * _Nonnull passportExpiration;
@property (nonatomic, copy) NSString * _Nonnull personalDocNumber;
@property (nonatomic, copy) NSString * _Nonnull checkSumChar1;
@property (nonatomic, copy) NSString * _Nonnull optional1;
@property (nonatomic) BOOL checkSumResult1;
@property (nonatomic) BOOL checkSumResult2;
@property (nonatomic) BOOL checkSumResult3;
@property (nonatomic) BOOL checkSumResult4;
@property (nonatomic) BOOL checkSumResult5;
@property (nonatomic) BOOL threeLineMrz;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP12AcuantCamera19AutoCaptureDelegate_")
@protocol AutoCaptureDelegate
- (BOOL)getAutoCapture SWIFT_WARN_UNUSED_RESULT;
- (void)setAutoCaptureWithAutoCapture:(BOOL)autoCapture;
@end

@class Image;

SWIFT_PROTOCOL("_TtP12AcuantCamera21CameraCaptureDelegate_")
@protocol CameraCaptureDelegate
- (void)setCapturedImageWithImage:(Image * _Nonnull)image barcodeString:(NSString * _Nullable)barcodeString;
@end


SWIFT_CLASS("_TtC12AcuantCamera23CameraCornerOverlayView")
@interface CameraCornerOverlayView : CALayer
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC12AcuantCamera25CameraDocumentOverlayView")
@interface CameraDocumentOverlayView : CAShapeLayer
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12AcuantCamera13CameraOptions")
@interface CameraOptions : NSObject
@property (nonatomic, readonly) NSInteger timeInMsPerDigit;
@property (nonatomic, readonly) NSInteger digitsToShow;
@property (nonatomic, readonly) BOOL allowBox;
@property (nonatomic, readonly) BOOL autoCapture;
@property (nonatomic, readonly) BOOL hideNavigationBar;
@property (nonatomic, readonly) NSInteger bracketLengthInHorizontal;
@property (nonatomic, readonly) NSInteger bracketLengthInVertical;
@property (nonatomic, readonly) CGFloat defaultBracketMarginWidth;
@property (nonatomic, readonly) CGFloat defaultBracketMarginHeight;
@property (nonatomic, readonly) CGColorRef _Nonnull colorHold;
@property (nonatomic, readonly) CGColorRef _Nonnull colorCapturing;
@property (nonatomic, readonly) CGColorRef _Nonnull colorBracketAlign;
@property (nonatomic, readonly) CGColorRef _Nonnull colorBracketCloser;
@property (nonatomic, readonly) CGColorRef _Nonnull colorBracketHold;
@property (nonatomic, readonly) CGColorRef _Nonnull colorBracketCapture;
@property (nonatomic, readonly, copy) NSString * _Nonnull defaultImageUrl;
@property (nonatomic, readonly) BOOL showBackButton;
- (nonnull instancetype)initWithTimeInMsPerDigit:(NSInteger)timeInMsPerDigit digitsToShow:(NSInteger)digitsToShow allowBox:(BOOL)allowBox autoCapture:(BOOL)autoCapture hideNavigationBar:(BOOL)hideNavigationBar bracketLengthInHorizontal:(NSInteger)bracketLengthInHorizontal bracketLengthInVertical:(NSInteger)bracketLengthInVertical defaultBracketMarginWidth:(CGFloat)defaultBracketMarginWidth defaultBracketMarginHeight:(CGFloat)defaultBracketMarginHeight colorHold:(CGColorRef _Nonnull)colorHold colorCapturing:(CGColorRef _Nonnull)colorCapturing colorBracketAlign:(CGColorRef _Nonnull)colorBracketAlign colorBracketCloser:(CGColorRef _Nonnull)colorBracketCloser colorBracketHold:(CGColorRef _Nonnull)colorBracketHold colorBracketCapture:(CGColorRef _Nonnull)colorBracketCapture defaultImageUrl:(NSString * _Nonnull)defaultImageUrl showBackButton:(BOOL)showBackButton OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12AcuantCamera14CameraTextView")
@interface CameraTextView : CATextLayer
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12AcuantCamera16CaptureConstants")
@interface CaptureConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger CAMERA_PREVIEW_LONGER_SIDE_STANDARD;)
+ (NSInteger)CAMERA_PREVIEW_LONGER_SIDE_STANDARD SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double CAMERA_PRIVEW_LARGER_DOCUMENT_DPI_RATIO;)
+ (double)CAMERA_PRIVEW_LARGER_DOCUMENT_DPI_RATIO SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double CAMERA_PRIVEW_SMALLER_DOCUMENT_DPI_RATIO;)
+ (double)CAMERA_PRIVEW_SMALLER_DOCUMENT_DPI_RATIO SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double ASPECT_RATIO_ID1;)
+ (double)ASPECT_RATIO_ID1 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double ASPECT_RATIO_ID3;)
+ (double)ASPECT_RATIO_ID3 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double ASPECT_RATIO_THRESHOLD;)
+ (double)ASPECT_RATIO_THRESHOLD SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger MANDATORY_RESOLUTION_THRESHOLD_DEFAULT;)
+ (NSInteger)MANDATORY_RESOLUTION_THRESHOLD_DEFAULT SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger MANDATORY_RESOLUTION_THRESHOLD_SMALL;)
+ (NSInteger)MANDATORY_RESOLUTION_THRESHOLD_SMALL SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger MANDATORY_RESOLUTION_THRESHOLD_DEFAULT_OLD_PHONES;)
+ (NSInteger)MANDATORY_RESOLUTION_THRESHOLD_DEFAULT_OLD_PHONES SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger MANDATORY_RESOLUTION_THRESHOLD_SMALL_OLD_PHONES;)
+ (NSInteger)MANDATORY_RESOLUTION_THRESHOLD_SMALL_OLD_PHONES SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger NO_DOCUMENT_DPI_THRESHOLD;)
+ (NSInteger)NO_DOCUMENT_DPI_THRESHOLD SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger SMALL_DOCUMENT_DPI_THRESHOLD;)
+ (NSInteger)SMALL_DOCUMENT_DPI_THRESHOLD SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger SHARPNESS_THRESHOLD;)
+ (NSInteger)SHARPNESS_THRESHOLD SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger GLARE_THRESHOLD;)
+ (NSInteger)GLARE_THRESHOLD SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum FrameResult : NSInteger;

SWIFT_PROTOCOL("_TtP12AcuantCamera21FrameAnalysisDelegate_")
@protocol FrameAnalysisDelegate
- (void)onFrameAvailableWithFrameResult:(enum FrameResult)frameResult points:(NSArray<NSValue *> * _Nullable)points;
@end

@class UIImage;

SWIFT_PROTOCOL("_TtP12AcuantCamera23DocumentCaptureDelegate_")
@protocol DocumentCaptureDelegate
- (void)readyToCapture;
- (void)documentCapturedWithImage:(UIImage * _Nonnull)image barcodeString:(NSString * _Nullable)barcodeString;
@end


SWIFT_CLASS("_TtC12AcuantCamera24DocumentCameraController")
@interface DocumentCameraController : UIViewController <AutoCaptureDelegate, DocumentCaptureDelegate, FrameAnalysisDelegate>
+ (DocumentCameraController * _Nonnull)getCameraControllerWithDelegate:(id <CameraCaptureDelegate> _Nonnull)delegate cameraOptions:(CameraOptions * _Nonnull)cameraOptions SWIFT_WARN_UNUSED_RESULT;
- (void)setAutoCaptureWithAutoCapture:(BOOL)autoCapture;
- (BOOL)getAutoCapture SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)documentCapturedWithImage:(UIImage * _Nonnull)image barcodeString:(NSString * _Nullable)barcodeString;
- (UIImage * _Nonnull)rotateImageWithImage:(UIImage * _Nonnull)image SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isDocumentMovedWithNewPoints:(NSArray<NSValue *> * _Nonnull)newPoints SWIFT_WARN_UNUSED_RESULT;
- (void)onFrameAvailableWithFrameResult:(enum FrameResult)frameResult points:(NSArray<NSValue *> * _Nullable)points;
- (void)readyToCapture;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, CameraState, open) {
  CameraStateAlign = 0,
  CameraStateMoveCloser = 1,
  CameraStateSteady = 2,
  CameraStateHold = 3,
  CameraStateCapture = 4,
};


@class AVCaptureMetadataOutput;
@class AVMetadataObject;
@class AVCapturePhotoOutput;
@class AVCapturePhoto;

SWIFT_CLASS("_TtC12AcuantCamera22DocumentCaptureSession")
@interface DocumentCaptureSession : AVCaptureSession <AVCaptureMetadataOutputObjectsDelegate, AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (DocumentCaptureSession * _Nonnull)getDocumentCaptureSessionWithDelegate:(id <DocumentCaptureDelegate> _Nullable)delegate frameDelegate:(id <FrameAnalysisDelegate> _Nonnull)frameDelegate autoCaptureDelegate:(id <AutoCaptureDelegate> _Nonnull)autoCaptureDelegate captureDevice:(AVCaptureDevice * _Nullable)captureDevice SWIFT_WARN_UNUSED_RESULT;
- (void)enableCapture;
- (void)start;
- (void)captureOutput:(AVCaptureOutput * _Nonnull)output didOutputSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer fromConnection:(AVCaptureConnection * _Nonnull)connection;
- (NSInteger)getFrameMatchThresholdWithCropDuration:(double)cropDuration SWIFT_WARN_UNUSED_RESULT;
- (void)captureOutput:(AVCaptureMetadataOutput * _Nonnull)output didOutputMetadataObjects:(NSArray<AVMetadataObject *> * _Nonnull)metadataObjects fromConnection:(AVCaptureConnection * _Nonnull)connection;
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhoto:(AVCapturePhoto * _Nonnull)photo error:(NSError * _Nullable)error;
@end


typedef SWIFT_ENUM(NSInteger, FrameResult, open) {
  FrameResultNO_DOCUMENT = 0,
  FrameResultSMALL_DOCUMENT = 1,
  FrameResultBAD_ASPECT_RATIO = 2,
  FrameResultGOOD_DOCUMENT = 3,
  FrameResultDOCUMENT_NOT_IN_FRAME = 4,
};



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
