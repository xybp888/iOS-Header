//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODataRequestThrottlerToken, GEOMapServiceTraits, NSDictionary;

@interface GEOAbstractTicket : NSObject
{
    GEOMapServiceTraits *_traits;
    unsigned long long _cachePolicy;
    NSDictionary *_responseUserInfo;
    _Bool _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *responseUserInfo; // @synthesize responseUserInfo=_responseUserInfo;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)setThrottlerToken:(id)arg1;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (id)description;
- (id)initWithTraits:(id)arg1;
- (id)init;

@end

