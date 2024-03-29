//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class DEDExtensionIdentifier, NSDate, NSDictionary, NSString;

@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding>
{
    _Bool _scheduled;
    NSString *_activityString;
    NSString *_bugSessionIdentifier;
    DEDExtensionIdentifier *_dedIdentifier;
    NSDate *_triggerDate;
    double _gracePeriod;
    NSDictionary *_parameters;
}

+ (id)activityStringForBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2;
+ (void)checkIn;
+ (id)allInfo;
+ (id)archivedClasses;
+ (double)recommendedGracePeriodForDate:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)log;
- (void).cxx_destruct;
@property _Bool scheduled; // @synthesize scheduled=_scheduled;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) double gracePeriod; // @synthesize gracePeriod=_gracePeriod;
@property(retain, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(readonly) DEDExtensionIdentifier *dedIdentifier; // @synthesize dedIdentifier=_dedIdentifier;
@property(readonly) NSString *bugSessionIdentifier; // @synthesize bugSessionIdentifier=_bugSessionIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *activityString; // @synthesize activityString=_activityString;
- (_Bool)isOverdue;
- (void)unschedule;
- (void)run;
- (void)schedule;
- (id)criteria;
- (void)removeFromStore;
- (void)addToStore;
- (id)initWithBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 runOnDate:(id)arg3 withGracePeriod:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

