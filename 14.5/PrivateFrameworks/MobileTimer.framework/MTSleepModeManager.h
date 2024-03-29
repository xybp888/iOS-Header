//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSleepModeManager-Protocol.h>

@class NSString;

@interface MTSleepModeManager : NSObject <MTSleepModeManager>
{
    _Bool _enabled;
}

@property(readonly, nonatomic) _Bool isEnabled;
- (void)setEnabled:(_Bool)arg1 valueDidChangeBlock:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)reconnect;
- (void)checkIn;
- (id)initWithDelegate:(id)arg1 isSynchronous:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

