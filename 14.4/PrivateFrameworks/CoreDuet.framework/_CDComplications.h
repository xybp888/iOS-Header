//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject
{
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
    NSDictionary *_activeComplications;
}

+ (id)initializeForAdmissionChecking:(_Bool)arg1;
+ (id)sharedComplication;
- (void).cxx_destruct;
@property(copy) NSDictionary *activeComplications; // @synthesize activeComplications=_activeComplications;
- (id)CDAttributeForComplication:(id)arg1 error:(id *)arg2;
- (void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (_Bool)isBundleActiveComplication:(id)arg1;
- (_Bool)admissionCheckOnComplication:(id)arg1 forRemote:(_Bool)arg2 error:(id *)arg3;
- (_Bool)watchIsCharging;
- (int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1;
- (id)initForComplications;
- (void)readOutActiveComplications;

@end

