//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKCalendarDate, NSString, UIColor, UIFont, UILabel;

@interface CompactMonthWeekTodayCircle : UIView
{
    EKCalendarDate *_calendarDate;
    unsigned long long _day;
    NSString *_dayString;
    UILabel *_dayLabel;
    UILabel *_overlayLabel;
    _Bool _compressed;
    _Bool _drawCircle;
    _Bool _useTodayColors;
    _Bool _showOverlay;
    _Bool _usesRoundedRectInsteadOfCircle;
    UIColor *_nonTodayColor;
    UIColor *_nonTodayCircleColor;
    UIFont *_fontOverride;
    double _fontSize;
    double _overlayFontSize;
}

+ (double)roundedRectDayNumberBaselineOffsetWithOverlay:(_Bool)arg1 fontSize:(double)arg2 overlayFontSize:(double)arg3;
+ (id)dayOverlayFontForSize:(double)arg1;
+ (id)dayNumberFontForSize:(double)arg1;
+ (double)topOffset;
+ (struct CGSize)roundedRectSizeForNumberString:(id)arg1 overlayString:(id)arg2 fontSize:(double)arg3 overlayFontSize:(double)arg4;
+ (double)roundedRectHeightWithOverlay:(_Bool)arg1 fontSize:(double)arg2 overlayFontSize:(double)arg3;
+ (double)circleDiameterWithOverlayLarge;
+ (double)circleDiameterWithOverlay;
+ (double)circleDiameterCompressed;
+ (double)circleDiameter;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesRoundedRectInsteadOfCircle; // @synthesize usesRoundedRectInsteadOfCircle=_usesRoundedRectInsteadOfCircle;
@property(nonatomic) double overlayFontSize; // @synthesize overlayFontSize=_overlayFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIFont *fontOverride; // @synthesize fontOverride=_fontOverride;
@property(retain, nonatomic) UIColor *nonTodayCircleColor; // @synthesize nonTodayCircleColor=_nonTodayCircleColor;
@property(retain, nonatomic) UIColor *nonTodayColor; // @synthesize nonTodayColor=_nonTodayColor;
@property(nonatomic) _Bool showOverlay; // @synthesize showOverlay=_showOverlay;
@property(nonatomic) _Bool useTodayColors; // @synthesize useTodayColors=_useTodayColors;
@property(nonatomic) _Bool drawCircle; // @synthesize drawCircle=_drawCircle;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColor;
- (void)layoutSubviews;
- (id)_dayNumberFontForSize:(double)arg1;
- (void)_updateTextColor;
- (void)updateOverlay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGRect dayNumberFrame;
- (id)overlayString;
- (id)dayNumberString;
- (id)initWithCalendarDate:(id)arg1;

@end

