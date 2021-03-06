//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EKCalendarDate, EKEvent, WeekGroupView;

@protocol WeekGroupViewDelegate <NSObject>

@optional
- (WeekGroupView *)weekGroupForWeekAfter:(WeekGroupView *)arg1;
- (WeekGroupView *)weekGroupForWeekBefore:(WeekGroupView *)arg1;
- (void)weekGroupAllDaySectionDidScroll:(WeekGroupView *)arg1;
- (void)weekGroupViewFirstVisibleSecondChanged:(long long)arg1;
- (void)weekGroupViewOccurrenceLayoutDidChange:(WeekGroupView *)arg1;
- (void)weekGroupViewDidLayout:(WeekGroupView *)arg1;
- (void)weekGroupDidEndDecelerating:(WeekGroupView *)arg1;
- (void)weekGroupDidEndDragging:(WeekGroupView *)arg1 willDecelerate:(_Bool)arg2;
- (void)weekGroupDidScroll:(WeekGroupView *)arg1;
- (void)weekGroupDidBeginDragging:(WeekGroupView *)arg1;
- (void)weekGroup:(WeekGroupView *)arg1 didReceiveTapForDate:(EKCalendarDate *)arg2;
- (void)emptySpaceClickedOnDate:(EKCalendarDate *)arg1;
- (void)emptySpaceClick;
- (void)didEditEvent:(EKEvent *)arg1;
- (void)weekGroup:(WeekGroupView *)arg1 didSelectEvent:(EKEvent *)arg2;
@end

