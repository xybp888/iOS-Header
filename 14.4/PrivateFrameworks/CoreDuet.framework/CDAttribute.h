//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDSession, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CDAttribute : NSObject
{
    CDSession *_session;
    NSString *_name;
    NSString *_fullName;
    long long _type;
    unsigned long long _integerId;
    NSMutableArray *resourceCallbackList;
    NSMutableArray *revocationCallbackList;
    NSObject<OS_dispatch_queue> *resourceCallbackQueue;
    int resourceCallToken;
    int focalAppToken;
    int conditionChangeToken;
    int systemConditionChangeToken;
    int localFocalInfoToken;
    int revocationToken;
    unsigned short _admissionMask;
    NSMutableDictionary *costCache;
    _Bool delayedUpdatePending;
    NSMutableDictionary *tokenCache;
    NSMutableDictionary *dateCache;
    NSMutableArray *activeReports;
    NSObject<OS_dispatch_queue> *_deferredRequestsQ;
    NSObject<OS_dispatch_queue> *admissionCacheQueue;
    NSMutableDictionary *admissionCache;
    CDSession *_sessionStrong;
    CDSession *_sessionWeak;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long integerId; // @synthesize integerId=_integerId;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (_Bool)requestStatisticFromDevice:(id)arg1 statistic:(long long)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)requestPeerForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
- (_Bool)requestTemporalForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
- (_Bool)resetAdmissionBitMask:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setAdmissionBitMask:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)reset:(long long)arg1 error:(id *)arg2;
- (id)historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)meteringUpdateWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)meteringStoppedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id *)arg5;
- (unsigned long long)meteringStartedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 error:(id *)arg4;
- (id)fullNameFromString:(id)arg1 clientId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setResourceAvailabilityBlockWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)setAdmissionRevocationBlockWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)setTrendBlockForValue:(id)arg1 withConfig:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (void)admissionCheckOfValueAsync:(id)arg1 type:(long long)arg2 options:(id)arg3 handleQueue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)admissionCheckOfValue:(id)arg1 type:(long long)arg2 options:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
- (_Bool)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (id)distinctValuesForHistoryWindow:(id)arg1 error:(id *)arg2;
- (id)histogramForHistoryWindow:(id)arg1 error:(id *)arg2;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (double)correlationOfValue:(id)arg1 toAttribute:(id)arg2 withValue:(id)arg3 temporalLeeway:(double)arg4 error:(id *)arg5;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)activityWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)activityStartedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)activityStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)backgroundLaunchStoppedWithValue:(id)arg1 error:(id *)arg2;
- (_Bool)backgroundLaunchStartedWithValue:(id)arg1 error:(id *)arg2;
- (_Bool)destroyWithError:(id *)arg1;
- (_Bool)associateToBudget:(id)arg1 error:(id *)arg2;
- (_Bool)setCategory:(long long)arg1 error:(id *)arg2;
- (id)description;
- (id)initWithMySession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;

@end

