//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HUNoiseSample : NSObject
{
    float _splValue;
    float _sampleDuration;
    NSDate *_sampleDate;
}

- (void).cxx_destruct;
@property(nonatomic) float sampleDuration; // @synthesize sampleDuration=_sampleDuration;
@property(nonatomic) float splValue; // @synthesize splValue=_splValue;
@property(retain, nonatomic) NSDate *sampleDate; // @synthesize sampleDate=_sampleDate;
- (id)initWithSampleDate:(id)arg1 splValue:(float)arg2 andDuration:(float)arg3;

@end

