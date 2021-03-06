//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSBundle, NSCalendar, NSDateFormatter, NSDateIntervalFormatter, NSLocale, NSString, NSTimeZone;

@interface SCLScheduleIntervalFormatter : NSFormatter
{
    _Bool _coalescesAMPMSymbols;
    _Bool _prefersHoursOnly;
    unsigned long long _formattingStyle;
    NSLocale *_locale;
    NSDateFormatter *_shortFormatter;
    NSDateIntervalFormatter *_briefFormatter;
    NSBundle *_bundle;
    NSString *_table;
    NSCalendar *_referenceCalendar;
    NSTimeZone *_referenceTimeZone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimeZone *referenceTimeZone; // @synthesize referenceTimeZone=_referenceTimeZone;
@property(retain, nonatomic) NSCalendar *referenceCalendar; // @synthesize referenceCalendar=_referenceCalendar;
@property(retain, nonatomic) NSString *table; // @synthesize table=_table;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSDateIntervalFormatter *briefFormatter; // @synthesize briefFormatter=_briefFormatter;
@property(retain, nonatomic) NSDateFormatter *shortFormatter; // @synthesize shortFormatter=_shortFormatter;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) _Bool prefersHoursOnly; // @synthesize prefersHoursOnly=_prefersHoursOnly;
@property(nonatomic) _Bool coalescesAMPMSymbols; // @synthesize coalescesAMPMSymbols=_coalescesAMPMSymbols;
@property(nonatomic) unsigned long long formattingStyle; // @synthesize formattingStyle=_formattingStyle;
- (id)_stringForCoalescedAMPMSymbolsWithDateInterval:(id)arg1 locale:(id)arg2 startTimeComponents:(id)arg3 endTimeComponents:(id)arg4;
- (id)_shortIntervalFormat;
- (id)_stringForDateInterval:(id)arg1 startComponents:(id)arg2 endComponents:(id)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTime:(id)arg1 toTime:(id)arg2;
- (id)stringFromTimeInterval:(id)arg1;
- (id)newDateFormatterWithLocale:(id)arg1;
- (id)init;

@end

