//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationRingView;

@interface NTKRichComplicationRingProgressView : NTKRichComplicationProgressView
{
    double _curveWidth;
    NTKRichComplicationRingView *_backgroundView;
    NTKRichComplicationRingView *_foregroundView;
    _Bool _clockwise;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
- (id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 forDevice:(id)arg4;

@end

