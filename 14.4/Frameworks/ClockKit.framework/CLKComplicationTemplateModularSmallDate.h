//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateModularSmallDate : CLKComplicationTemplate
{
    CLKDateTextProvider *_weekdayTextProvider;
    CLKDateTextProvider *_dayTextProvider;
    unsigned long long _highlightMode;
}

+ (id)templateWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKDateTextProvider *dayTextProvider; // @synthesize dayTextProvider=_dayTextProvider;
@property(copy, nonatomic) CLKDateTextProvider *weekdayTextProvider; // @synthesize weekdayTextProvider=_weekdayTextProvider;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)initPrivateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (_Bool)highlightLine2;
- (void)setHighlightLine2:(_Bool)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (long long)compatibleFamily;
- (id)initWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;

@end

