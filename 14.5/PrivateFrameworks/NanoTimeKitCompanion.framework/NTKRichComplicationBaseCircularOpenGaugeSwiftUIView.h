//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularOpenGaugeContentView.h>

@class _TtC19ComplicationDisplay23ComplicationHostingView;

@interface NTKRichComplicationBaseCircularOpenGaugeSwiftUIView : NTKRichComplicationCircularOpenGaugeContentView
{
    _TtC19ComplicationDisplay23ComplicationHostingView *_bottomSwiftUIView;
}

- (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)setPaused:(_Bool)arg1;
- (void)gaugeProvider:(id *)arg1 andCenterTextProvider:(id *)arg2 fromTemplate:(id)arg3;
- (id)bottomView;

@end

