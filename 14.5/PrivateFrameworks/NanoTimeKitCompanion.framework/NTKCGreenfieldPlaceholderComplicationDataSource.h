//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTimelineEntry, NTKGreenfieldPlaceholderComplication;

@interface NTKCGreenfieldPlaceholderComplicationDataSource : NTKComplicationDataSource
{
    NTKGreenfieldPlaceholderComplication *_placeholderComplication;
    CLKComplicationTimelineEntry *_cachedTimelineEntry;
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (id)_currentTimelineEntry;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (void)resume;
- (void)pause;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end

