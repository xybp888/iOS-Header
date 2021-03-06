//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSLocale, NSTimeZone;

@interface PLDateRangeFormatter : NSObject
{
    struct os_unfair_lock_s _lock;
    long long _preset;
    NSLocale *_locale;
    _Bool _useLocalDates;
    NSTimeZone *_timeZone;
    _Bool _includeDayNumbers;
    _Bool _includeDayNumbersWhenMonthsDiffer;
    _Bool _useRelativeDayFormatting;
    _Bool _useShortMonths;
    _Bool _useShortDaysInRanges;
    _Bool _useTime;
    _Bool _yearOnly;
    _Bool _monthOnly;
    _Bool _timeOnly;
    _Bool _omitYear;
    _Bool _monthWithDelimiterAndYear;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_monthYearDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    struct UDateIntervalFormat *_monthDayIntervalFormat;
    struct UDateIntervalFormat *_monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat *_timeIntervalFormat;
    struct UDateIntervalFormat *_monthIntervalFormat;
    struct UDateIntervalFormat *_monthYearIntervalFormat;
    struct UDateIntervalFormat *_yearIntervalFormat;
}

+ (id)autoupdatingFormatterWithPreset:(long long)arg1;
- (void).cxx_destruct;
- (id)stringFromDate:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;
@property(nonatomic) _Bool useLocalDates;
@property(retain, nonatomic) NSLocale *locale;
@property(nonatomic) long long preset;
- (id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;
- (struct UDateIntervalFormat *)_yearIntervalFormat;
- (struct UDateIntervalFormat *)_monthYearIntervalFormat;
- (struct UDateIntervalFormat *)_monthIntervalFormat;
- (struct UDateIntervalFormat *)_timeIntervalFormat;
- (struct UDateIntervalFormat *)_dayOfTheWeekIntervalFormat;
- (struct UDateIntervalFormat *)_differentMonthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat *)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat *)_monthDayIntervalFormat;
- (id)_relativeDateFormatter;
- (id)_monthYearDateFormatter;
- (id)_monthDateFormatter;
- (id)_yearDateFormatter;
- (id)_dayOfTheWeekDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameDayDateFormatter;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayTemplate;
- (id)_sameMonthTemplate;
- (void)_resetFormatters;
- (id)localTimeZone;
- (void)_handleUseLocalDatesDidChange;
- (void)_handlePresetDidChange;
- (void)_significantTimeChange:(id)arg1;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPreset:(long long)arg1;

@end

