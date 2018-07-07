//
//  AppDelegate.h
//  NaviTest
//
//  Created by 학철 on 2018. 7. 5..
//  Copyright © 2018년 학철. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import "RootViewController.h"
#import "MainNavigationController.h"
#import "RootNavigationController.h"

@interface NaviTestAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) MainNavigationController *mainNavigationController;
@property (strong, nonatomic) RootNavigationController *rootNavigationController;
@property (strong, nonatomic) MainViewController *mainViewController;
@property (strong, nonatomic) RootViewController *rootViewController;

+ (NaviTestAppDelegate *)sharedAppDelegate;
@end

