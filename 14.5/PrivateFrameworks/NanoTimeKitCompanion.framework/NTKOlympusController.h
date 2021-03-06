//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKClockTimerToken, NSDate, NTKFaceView, NTKOlympusTimeView;

@interface NTKOlympusController : NSObject
{
    NTKOlympusTimeView *_olympusView;
    CLKClockTimerToken *_clockTimerToken;
    NTKFaceView *_faceView;
    NSDate *_date;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _second;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long second; // @synthesize second=_second;
@property(nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property(nonatomic) unsigned long long hour; // @synthesize hour=_hour;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(retain, nonatomic) CLKClockTimerToken *clockTimerToken; // @synthesize clockTimerToken=_clockTimerToken;
@property(nonatomic) __weak NTKOlympusTimeView *olympusView; // @synthesize olympusView=_olympusView;
- (void)_applyWindrunnerMask;
- (void)_handleSignificantTimeChanged;
- (_Bool)_hasWindrunnerWedge;
- (void)_animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (void)_updateHourComponentsWithDate:(id)arg1;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyDataMode:(long long)arg1;
- (void)dealloc;
- (id)initWithFaceView:(id)arg1 olympusView:(id)arg2;

@end

