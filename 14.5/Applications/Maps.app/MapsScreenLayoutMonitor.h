//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutMonitorConfiguration, GEOObserverHashTable;

__attribute__((visibility("hidden")))
@interface MapsScreenLayoutMonitor : NSObject
{
    GEOObserverHashTable *_observers;
    FBSDisplayLayout *_lastKnownLayout;
    _Bool _hasFirstUpdate;
    _Bool _needsUpdate;
    _Bool _locked;
    _Bool _isScreenFullyOn;
    _Bool _isScreenOn;
    _Bool _isOurAppActive;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    unsigned long long _changeReason;
    FBSDisplayLayoutMonitorConfiguration *_configuration;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(retain, nonatomic) FBSDisplayLayoutMonitorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long changeReason; // @synthesize changeReason=_changeReason;
@property(nonatomic) _Bool isOurAppActive; // @synthesize isOurAppActive=_isOurAppActive;
@property(nonatomic) _Bool isScreenOn; // @synthesize isScreenOn=_isScreenOn;
@property(nonatomic) _Bool isScreenFullyOn; // @synthesize isScreenFullyOn=_isScreenFullyOn;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
- (void)_layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (unsigned long long)_changeReasonWithNewLayout:(id)arg1 context:(id)arg2;
- (_Bool)_isMapsActiveInLayout:(id)arg1;
- (void)_notifyObservers;
- (void)_prepareLayoutMonitor;
- (void)stopMonitoringWithObserver:(id)arg1;
- (void)startMonitoringWithObserver:(id)arg1;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
- (void)dealloc;
- (id)init;

@end

