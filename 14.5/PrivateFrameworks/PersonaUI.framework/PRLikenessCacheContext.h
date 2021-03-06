//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRLikenessCacheContext : NSObject
{
    _Bool _circular;
    _Bool _forceDecode;
    unsigned long long _cacheSize;
    double _scale;
}

+ (id)contextWithCacheSize:(unsigned long long)arg1;
@property(nonatomic) _Bool forceDecode; // @synthesize forceDecode=_forceDecode;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool circular; // @synthesize circular=_circular;
@property(nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (id)init;

@end

