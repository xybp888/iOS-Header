//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UICollectionViewDelegate-Protocol.h>

@class NSCalendar, NSDateFormatter, NSLayoutConstraint, NSLocale, NSString, UICollectionView, UICollectionViewDiffableDataSource, UIStackView, _UIDatePickerCalendarDay, _UIDatePickerCalendarMonth, _UIDatePickerCalendarViewDataSourceController, _UIDatePickerDateRange, _UIDatePickerLinkedLabel;
@protocol _UIDatePickerCalendarDateViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarDateView : UIView <UICollectionViewDelegate>
{
    struct {
        unsigned int needsCollectionViewSelectionUpdate:1;
        unsigned int needsCollectionViewScrollPositionUpdate:1;
        unsigned int needsUpdateSizing:1;
        unsigned int isIgnoringScrollCallbacks:1;
        unsigned int renderOverhangDays:1;
    } _flags;
    NSDateFormatter *_cellFormatter;
    UIStackView *_weekdayStackView;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionViewDiffableDataSource *_dataSource;
    _UIDatePickerCalendarViewDataSourceController *_dataSourceController;
    struct CGPoint _frozenContentOffset;
    struct CGSize _lastKnownSize;
    _UIDatePickerLinkedLabel *_daySizingLabel;
    _UIDatePickerLinkedLabel *_weekdaySizingLabel;
    id <_UIDatePickerCalendarDateViewDelegate> _delegate;
    NSCalendar *_calendar;
    NSLocale *_locale;
    _UIDatePickerDateRange *_dateRange;
    NSString *_customFontDesign;
    _UIDatePickerCalendarMonth *_visibleMonth;
    _UIDatePickerCalendarDay *_selectedDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIDatePickerCalendarDay *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth; // @synthesize visibleMonth=_visibleMonth;
@property(retain, nonatomic) NSString *customFontDesign; // @synthesize customFontDesign=_customFontDesign;
@property(readonly, nonatomic) _UIDatePickerDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <_UIDatePickerCalendarDateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_cleanupDataIfNecessary;
- (void)_updateVisibleMonthIfNecessary;
- (void)_performIfNotIgnoringScrollCallbacks:(CDUnknownBlockType)arg1;
- (void)_performIgnoringScrollCallbacks:(CDUnknownBlockType)arg1;
- (void)_setVisibleMonth:(id)arg1 animated:(_Bool)arg2 updateDataSource:(_Bool)arg3 updateCollectionView:(_Bool)arg4 notifyDelegate:(_Bool)arg5;
- (void)setVisibleMonth:(id)arg1 animated:(_Bool)arg2;
- (void)_restoreContentOffsetWithPageOffset:(long long)arg1;
- (void)_freezeContentOffset;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)_setSelectedDate:(id)arg1 animated:(_Bool)arg2 updateVisibleMonth:(_Bool)arg3 updateCollectionView:(_Bool)arg4 notifyDelegate:(_Bool)arg5;
- (void)setSelectedDate:(id)arg1 animated:(_Bool)arg2;
- (void)_notifyDelegateAboutVisibilityChange;
- (void)_notifyDelegateAboutDataChange;
- (void)_updateCollectionViewContentInsets;
- (void)_updateCollectionViewScrollPosition:(_Bool)arg1;
- (void)_updateCollectionViewSelection:(_Bool)arg1;
- (void)_setNeedsCollectionViewScrollPositionUpdate;
- (void)_setNeedsCollectionViewSelectionUpdate;
- (void)_shouldDifferentiateWithoutColorUpdated:(id)arg1;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 selectedDay:(id)arg4 visibleMonth:(id)arg5;
- (void)_reload;
- (void)_reloadCollectionViewLayout;
- (void)_reloadWeekdays;
- (void)_reloadPossibleDayValues;
- (void)_reloadDateFormatters;
- (void)_reloadDataSourceController;
- (double)__dayAndWeekdayLabelWidth;
- (void)_updateSizing;
- (void)_setNeedsUpdateSizing;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)_cellForCollectionView:(id)arg1 indexPath:(id)arg2 day:(id)arg3;
- (void)_setupViewHierarchy;
- (void)_setupDateFormatter;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

