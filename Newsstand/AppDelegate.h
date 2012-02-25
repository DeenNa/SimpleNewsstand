//
//  AppDelegate.h
//  Newsstand
//
//  Created by Deen Na on 2/18/12.
//  Copyright (c) 2012 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class StoreViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    UINavigationController *nav;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) StoreViewController *store;

@end
