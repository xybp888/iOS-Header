//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/NSObject-Protocol.h>

@class NSArray, NSHTTPCookieStorage, NSString, NSURL, NSURLRequest;

@protocol SLWebAuthRequest <NSObject>
+ (_Bool)urlPageWillContainAuthorizationCode:(NSURL *)arg1;
+ (NSURLRequest *)urlRequestForClientID:(NSString *)arg1 redirectURI:(NSString *)arg2 scope:(NSArray *)arg3 username:(NSString *)arg4 authRequestURL:(NSString *)arg5;
+ (NSURLRequest *)requestForURL:(NSURL *)arg1;
+ (NSURL *)urlForClientID:(NSString *)arg1 redirectURI:(NSString *)arg2 scope:(NSArray *)arg3 username:(NSString *)arg4 authRequestURL:(NSString *)arg5 codeChallenge:(NSString *)arg6;
+ (NSURL *)urlForClientID:(NSString *)arg1 redirectURI:(NSString *)arg2 scope:(NSArray *)arg3 username:(NSString *)arg4 authRequestURL:(NSString *)arg5;
+ (void)clearCookiesFromStorage:(NSHTTPCookieStorage *)arg1 authRequestURL:(NSString *)arg2;

@optional
+ (NSString *)authCodeFromRedirectURL:(NSURL *)arg1;
+ (NSString *)authCodeFromWebPageTitle:(NSString *)arg1;
+ (NSString *)authCodeFromURLRequest:(NSURLRequest *)arg1;
@end

