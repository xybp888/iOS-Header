//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSString;

@interface CUIKIconDrawObject : NSObject
{
    NSCalendar *_calendar;
    NSString *_dayNumber;
    NSString *_dateName;
    double _canvasScale;
    struct CGSize _canvasSize;
}

+ (_Bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;
+ (id)countriesRequiringBlackDayOfWeek;
- (void).cxx_destruct;
@property(readonly, nonatomic) double canvasScale; // @synthesize canvasScale=_canvasScale;
@property(readonly, nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(readonly, copy, nonatomic) NSString *dateName; // @synthesize dateName=_dateName;
@property(readonly, copy, nonatomic) NSString *dayNumber; // @synthesize dayNumber=_dayNumber;
@property(readonly, copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)colorForDayOfWeek;
- (id)_iconRedColor;
- (id)_iconBlackColor;
- (id)_dayNumberFont;
- (id)_dateNameFont;
- (id)_dateNameFontOfSize:(double)arg1;
- (double)_roundSpecToActual:(double)arg1;
- (void)_drawDateName;
- (void)_drawDayNumber;
- (void)draw;
- (id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateName:(id)arg3 canvasSize:(struct CGSize)arg4 canvasScale:(double)arg5;

@end

