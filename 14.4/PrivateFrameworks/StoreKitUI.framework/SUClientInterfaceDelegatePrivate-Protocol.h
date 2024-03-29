//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SUClientInterfaceDelegate-Protocol.h>

@class NSData, NSDictionary, NSHTTPURLResponse, NSURL, SUClientInterface, UIViewController;

@protocol SUClientInterfaceDelegatePrivate <SUClientInterfaceDelegate>

@optional
- (_Bool)clientInterface:(SUClientInterface *)arg1 isAllowedToOpenExternalURL:(NSURL *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 dismissSafariViewControllerAnimated:(_Bool)arg2 fromViewController:(UIViewController *)arg3 completion:(void (^)(void))arg4;
- (void)clientInterface:(SUClientInterface *)arg1 presentSafariViewControllerWithURL:(NSURL *)arg2 fromViewController:(UIViewController *)arg3 animated:(_Bool)arg4 completion:(void (^)(void))arg5;
- (void)clientInterface:(SUClientInterface *)arg1 dismissViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)clientInterface:(SUClientInterface *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 dispatchXEvent:(NSDictionary *)arg2 completionBlock:(void (^)(_Bool))arg3;
- (void)clientInterface:(SUClientInterface *)arg1 dispatchOnPageResponseWithData:(NSData *)arg2 response:(NSHTTPURLResponse *)arg3;
@end

