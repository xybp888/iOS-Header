//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAEventBufferSettings : NSObject
{
    unsigned long long _bufferCapacity;
    double _bufferTimeIntervalOfRetention;
}

@property(readonly, nonatomic) double bufferTimeIntervalOfRetention; // @synthesize bufferTimeIntervalOfRetention=_bufferTimeIntervalOfRetention;
@property(readonly, nonatomic) unsigned long long bufferCapacity; // @synthesize bufferCapacity=_bufferCapacity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBufferCapacityOrDefault:(id)arg1 bufferTimeIntervalOfRetentionOrDefault:(id)arg2;
- (id)initWithBufferCapacity:(unsigned long long)arg1 bufferTimeIntervalOfRetention:(double)arg2;

@end

