//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSInvalidatable-Protocol.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface UISApplicationStateClient : NSObject <BSInvalidatable>
{
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

- (void).cxx_destruct;
- (id)_remoteTarget;
@property(nonatomic) double nextWakeIntervalSinceReferenceDate;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;
@property(nonatomic) _Bool usesBackgroundNetwork;
@property(copy, nonatomic) NSString *badgeValue;
- (void)invalidate;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

