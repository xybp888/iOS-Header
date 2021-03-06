//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer;
@protocol OS_os_activity;

@interface HFUpdateLogger : NSObject
{
    _Bool _didReachSoftTimeout;
    NSObject<OS_os_activity> *_loggerActivity;
    NSString *_clientDescription;
    NSDate *_startDate;
    double _softTimeoutInterval;
    NSTimer *_softTimeoutTimer;
}

+ (id)history;
+ (id)runningLoggers;
- (void).cxx_destruct;
@property(nonatomic) _Bool didReachSoftTimeout; // @synthesize didReachSoftTimeout=_didReachSoftTimeout;
@property(retain, nonatomic) NSTimer *softTimeoutTimer; // @synthesize softTimeoutTimer=_softTimeoutTimer;
@property(nonatomic) double softTimeoutInterval; // @synthesize softTimeoutInterval=_softTimeoutInterval;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *clientDescription; // @synthesize clientDescription=_clientDescription;
@property(retain, nonatomic) NSObject<OS_os_activity> *loggerActivity; // @synthesize loggerActivity=_loggerActivity;
- (id)description;
- (void)_handleTimeout:(id)arg1;
- (void)finish;
- (id)initWithTimeout:(double)arg1 description:(id)arg2;

@end

