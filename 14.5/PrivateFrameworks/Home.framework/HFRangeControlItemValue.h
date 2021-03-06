//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFNumberRange, NSNumber;

@interface HFRangeControlItemValue : NSObject
{
    unsigned long long _mode;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_targetValue;
}

+ (id)targetValueWithValue:(id)arg1;
+ (id)thresholdValueWithMinimumValue:(id)arg1 maximumValue:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *targetValue; // @synthesize targetValue=_targetValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) HFNumberRange *numberRange;

@end

