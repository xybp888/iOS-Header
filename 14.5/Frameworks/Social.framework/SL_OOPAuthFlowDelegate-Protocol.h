//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSMutableURLRequest, NSString, NSURL, NSURLRequest;

@protocol SL_OOPAuthFlowDelegate
- (void)webViewDidFinishLoadWithPageTitleSupplier:(void (^)(void (^)(NSString *)))arg1;
- (_Bool)shouldHideWebViewForLoadWithRequest:(NSURLRequest *)arg1;
- (NSMutableURLRequest *)requestForAuthURL:(NSURL *)arg1;
- (NSURL *)authURLForUsername:(NSString *)arg1;
- (void)setAuthFlowCompletion:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (NSString *)initialRedirectURL;
@end

