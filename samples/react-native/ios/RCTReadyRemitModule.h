//
//  RCTReadyRemitModule.h
//  ReadyRemitReactNativeSample
//
//  Created by Lucas Bordini Ribeiro de Araujo on 28/11/22.
//

#ifndef RCTReadyRemitModule_h
#define RCTReadyRemitModule_h

#import <React/RCTBridgeModule.h>
#import "ReadyRemitSDK/ReadyRemitSDK.h"
#import <React/RCTEventEmitter.h>

@interface RCTReadyRemitModule : RCTEventEmitter <RCTBridgeModule, ReadyRemitDelegate> {
  void (^_authSuccessCallback)(NSString *token);
  void (^_transferSuccessCallback)(NSString *token);
  void (^_transferFailCallback)(NSString *error, NSString *errorMessage);
}

@end

#endif /* RCTReadyRemitModule_h */
