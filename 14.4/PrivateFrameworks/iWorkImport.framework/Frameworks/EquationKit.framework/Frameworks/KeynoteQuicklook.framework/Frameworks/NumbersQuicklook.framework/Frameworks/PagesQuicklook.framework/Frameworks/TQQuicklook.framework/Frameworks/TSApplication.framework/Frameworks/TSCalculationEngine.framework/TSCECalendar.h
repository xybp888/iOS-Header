//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar;

@interface TSCECalendar : NSObject
{
    NSCalendar *_calendar;
}

- (void).cxx_destruct;
- (id)dateWithIdenticalComponentsInGMTForDate:(id)arg1;
- (void)extractComponentsFromDate:(id)arg1 year:(long long *)arg2 month:(long long *)arg3 day:(long long *)arg4;
- (void)extractComponentsFromDate:(id)arg1 year:(long long *)arg2 month:(long long *)arg3 day:(long long *)arg4 hour:(long long *)arg5 minute:(long long *)arg6 second:(long long *)arg7;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1 timeZone:(id)arg2;
- (id)init;

@end

