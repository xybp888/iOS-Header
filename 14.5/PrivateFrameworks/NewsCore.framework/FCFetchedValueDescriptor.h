//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCFetchedValueDescriptor : NSObject
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *inputManagers;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2;

@end

