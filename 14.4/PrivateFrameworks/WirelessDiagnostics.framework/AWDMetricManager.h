//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWDMetricManager : NSObject
{
}

+ (void)postMetricWithId:(unsigned long long)arg1 object:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 numberValue:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 stringValue:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 unsignedIntegerValue:(unsigned long long)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 integerValue:(long long)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 boolValue:(_Bool)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1;

@end

