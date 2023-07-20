#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef READYREMITSDK_SWIFT_H
#define READYREMITSDK_SWIFT_H
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
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ReadyRemitSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)




@class ReadyRemitAppearance;
enum ReadyRemitEnvironment : NSInteger;
@class UINavigationController;
@protocol ReadyRemitDelegate;
@class NSString;

SWIFT_CLASS("_TtC13ReadyRemitSDK10ReadyRemit")
@interface ReadyRemit : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ReadyRemit * _Nonnull shared;)
+ (ReadyRemit * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) ReadyRemitAppearance * _Nonnull appearance;
@property (nonatomic) enum ReadyRemitEnvironment environment;
- (void)launchObjcInNavigation:(UINavigationController * _Nonnull)inNavigation delegate:(id <ReadyRemitDelegate> _Nonnull)delegate onLaunch:(void (^ _Nullable)(void))onLaunch onDismiss:(void (^ _Nullable)(void))onDismiss;
- (void)languageSelected:(NSString * _Nonnull)lang;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface ReadyRemit (SWIFT_EXTENSION(ReadyRemitSDK))
@end

@class RequestField;

SWIFT_CLASS("_TtCC13ReadyRemitSDK10ReadyRemit15TransferRequest")
@interface TransferRequest : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull dstCountryIso3Code;
@property (nonatomic, readonly, copy) NSString * _Nonnull dstCurrencyIso3Code;
@property (nonatomic, readonly, copy) NSString * _Nonnull srcCurrencyIso3Code;
@property (nonatomic, readonly, copy) NSString * _Nonnull transferMethod;
@property (nonatomic, readonly, copy) NSString * _Nonnull quoteBy;
@property (nonatomic, readonly) NSInteger amount;
@property (nonatomic, readonly) NSInteger fee;
@property (nonatomic, readonly, copy) NSString * _Nonnull recipientId;
@property (nonatomic, readonly, copy) NSString * _Nullable recipientAccountId;
@property (nonatomic, readonly, copy) NSArray<RequestField *> * _Nullable fields;
@property (nonatomic, readonly, copy) NSString * _Nullable quoteHistoryId;
- (nonnull instancetype)initWithDstCountryIso3Code:(NSString * _Nonnull)dstCountryIso3Code dstCurrencyIso3Code:(NSString * _Nonnull)dstCurrencyIso3Code srcCurrencyIso3Code:(NSString * _Nonnull)srcCurrencyIso3Code transferMethod:(NSString * _Nonnull)transferMethod quoteBy:(NSString * _Nonnull)quoteBy amount:(NSInteger)amount fee:(NSInteger)fee recipientId:(NSString * _Nonnull)recipientId recipientAccountId:(NSString * _Nullable)recipientAccountId fields:(NSArray<RequestField *> * _Nullable)fields quoteHistoryId:(NSString * _Nonnull)quoteHistoryId OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nullable)toJSON SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC13ReadyRemitSDK10ReadyRemit12RequestField")
@interface RequestField : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull type;
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
@property (nonatomic, readonly, copy) NSString * _Nonnull displayText;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id name:(NSString * _Nonnull)name type:(NSString * _Nonnull)type value:(NSString * _Nonnull)value displayText:(NSString * _Nonnull)displayText OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class ReadyRemitColorScheme;
@class NSDictionary;

SWIFT_CLASS("_TtC13ReadyRemitSDK20ReadyRemitAppearance")
@interface ReadyRemitAppearance : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ReadyRemitAppearance * _Nonnull shared;)
+ (ReadyRemitAppearance * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) ReadyRemitColorScheme * _Nonnull colors;
- (nonnull instancetype)initWithColors:(ReadyRemitColorScheme * _Nonnull)colors OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithStyles:(NSDictionary * _Nonnull)styles OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

SWIFT_CLASS("_TtC13ReadyRemitSDK21ReadyRemitColorScheme")
@interface ReadyRemitColorScheme : NSObject
@property (nonatomic, strong) UIColor * _Nonnull background;
@property (nonatomic, strong) UIColor * _Nonnull foreground;
@property (nonatomic, strong) UIColor * _Nonnull danger;
@property (nonatomic, strong) UIColor * _Nonnull dangerLight;
@property (nonatomic, strong) UIColor * _Nonnull success;
@property (nonatomic, strong) UIColor * _Nonnull divider;
@property (nonatomic, strong) UIColor * _Nonnull inputLine;
@property (nonatomic, strong) UIColor * _Nonnull icon;
@property (nonatomic, strong) UIColor * _Nonnull text;
@property (nonatomic, strong) UIColor * _Nonnull textSecondary;
@property (nonatomic, strong) UIColor * _Nonnull buttonText;
@property (nonatomic, strong) UIColor * _Nonnull primary;
@property (nonatomic, strong) UIColor * _Nonnull primaryLight;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP13ReadyRemitSDK18ReadyRemitDelegate_")
@protocol ReadyRemitDelegate
- (void)onAuthTokenRequestWithSuccess:(void (^ _Nonnull)(NSString * _Nonnull))success failure:(void (^ _Nonnull)(void))failure;
- (void)onSubmitTransferWithTransferRequest:(TransferRequest * _Nonnull)transferRequest success:(void (^ _Nonnull)(NSString * _Nonnull))success failure:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull))failure;
@optional
- (void)onSDKClose;
@end

typedef SWIFT_ENUM(NSInteger, ReadyRemitEnvironment, open) {
  ReadyRemitEnvironmentProduction = 0,
  ReadyRemitEnvironmentSandbox = 1,
};


SWIFT_CLASS("_TtC13ReadyRemitSDK20ReadyRemitFontScheme")
@interface ReadyRemitFontScheme : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull defaultFamily;)
+ (NSString * _Nonnull)defaultFamily SWIFT_WARN_UNUSED_RESULT;
+ (void)setDefaultFamily:(NSString * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL dynamicFontsize;)
+ (BOOL)dynamicFontsize SWIFT_WARN_UNUSED_RESULT;
+ (void)setDynamicFontsize:(BOOL)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13ReadyRemitSDK24ReadyRemitObjcOAuthToken")
@interface ReadyRemitObjcOAuthToken : NSObject
- (nonnull instancetype)initWithTokenType:(NSString * _Nonnull)tokenType accessToken:(NSString * _Nonnull)accessToken expiresInSeconds:(NSInteger)expiresInSeconds OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end










#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
