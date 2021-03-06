//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSMutableDictionary, NSNumber, NSObject, NSString, SSBag, SSVPlatformContext;
@protocol OS_dispatch_queue;

@interface SSVPlatformRequestOperation : NSOperation
{
    NSMutableDictionary *_additionalHeaderFields;
    NSMutableDictionary *_additionalParameters;
    NSString *_caller;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSArray *_bundleIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;
    long long _personalizationStyle;
    CDUnknownBlockType _responseBlock;
    NSString *_storeFrontSuffix;
    NSNumber *_timeoutInterval;
    NSString *_userAgent;
    _Bool _shouldSuppressCookies;
    _Bool _shouldSuppressUserInfo;
    SSBag *_bag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SSBag *bag; // @synthesize bag=_bag;
@property _Bool shouldSuppressUserInfo; // @synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo;
@property _Bool shouldSuppressCookies; // @synthesize shouldSuppressCookies=_shouldSuppressCookies;
- (id)_URLBagContext;
- (void)_makeLookupRequestWithPersonalizationStyle:(long long)arg1;
- (void)_makeLocalMescalRequest;
- (void)_makeLocalJSSignRequest;
- (id)_lookupWithRequest:(id)arg1 error:(id *)arg2;
- (void)_enumerateQueryParametersUsingBlock:(CDUnknownBlockType)arg1;
- (id)_callerValue;
- (void)_setUserAgent:(id)arg1;
- (void)_setCaller:(id)arg1;
- (void)main;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)valueForRequestParameter:(id)arg1;
@property(copy) NSNumber *timeoutInterval;
@property(copy) NSString *storeFrontSuffix;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
@property(copy) CDUnknownBlockType responseBlock;
@property long long personalizationStyle;
@property(copy) NSString *keyProfile;
@property(copy) NSArray *bundleIdentifiers;
@property(copy) NSArray *itemIdentifiers;
@property(copy) NSString *imageProfile;
- (id)initWithPlatformContext:(id)arg1;
- (id)init;

@end

