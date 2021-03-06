//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class NSError, NSString, WFTumblrViewController;

@protocol WFTumblrViewControllerDelegate <NSObject>

@optional
- (void)tumblrViewControllerDidCancel:(WFTumblrViewController *)arg1;
- (void)tumblrViewController:(WFTumblrViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)tumblrViewController:(WFTumblrViewController *)arg1 didSucceedWithOAuthToken:(NSString *)arg2 OAuthTokenSecret:(NSString *)arg3;
@end

