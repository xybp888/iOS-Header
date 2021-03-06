//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation
{
}

@property(copy) NSString *rotationMode;
@property(copy) NSArray *biasValues;
@property(copy) NSArray *continuityValues;
@property(copy) NSArray *tensionValues;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
@property const struct CGPath *path;
@property(copy) NSArray *values;
@property(copy) NSArray *timingFunctions;
@property(copy) NSArray *keyTimes;
@property(copy) NSString *calculationMode;
- (_Bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (void)CA_prepareRenderValue;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

@end

