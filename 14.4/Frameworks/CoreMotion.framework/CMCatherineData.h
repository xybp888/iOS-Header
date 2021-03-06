//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMCatherineData : CMLogItem
{
    double _catherine;
    double _confidence;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double catherine; // @synthesize catherine=_catherine;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;

@end

