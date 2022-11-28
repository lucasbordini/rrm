//
//  ReadyRemitViewController.h
//  ReadyRemitReactNativeSample
//
//  Created by Lucas Bordini Ribeiro de Araujo on 28/11/22.
//

#ifndef ReadyRemitViewController_h
#define ReadyRemitViewController_h

#import <UIKit/UIkit.h>
#import "ReadyRemitSDK/ReadyRemitSDK.h"

@interface ReadyRemitViewController : UIViewController
@property (nonatomic, assign) id<ReadyRemitDelegate> delegate;
@property (nonatomic, assign) NSString* language;
@property (nonatomic, assign) ReadyRemitApiEnvironment environment;
@property (nonatomic, strong) ReadyRemitAppearance* appearance;
@end

#endif /* ReadyRemitViewController_h */
