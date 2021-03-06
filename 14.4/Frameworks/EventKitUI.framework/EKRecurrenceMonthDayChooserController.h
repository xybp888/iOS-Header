//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController
{
    NSMutableSet *_daysOfTheMonthSet;
    _Bool _prohibitsMultipleDaysInMonthlyRecurrence;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence; // @synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)refreshCells;
- (void)prepareForDisplay;
- (long long)gridViewType;
- (id)cellLabels;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (id)daysOfTheMonth;
- (long long)frequency;
- (id)initWithDate:(id)arg1;

@end

