//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/_HKAudioStandardQuantityContextDelegate.h>

@class HKLineSeries;

@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate
{
    HKLineSeries *_audioOverlayLineSeries;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKLineSeries *audioOverlayLineSeries; // @synthesize audioOverlayLineSeries=_audioOverlayLineSeries;
- (id)formatterForTimescope:(long long)arg1;
- (void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)alternateLineSeries;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;

@end

