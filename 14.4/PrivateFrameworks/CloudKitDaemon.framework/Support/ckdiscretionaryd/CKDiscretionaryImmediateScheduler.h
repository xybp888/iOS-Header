//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDiscretionaryScheduler-Protocol.h"

@class NSString;

@interface CKDiscretionaryImmediateScheduler : NSObject <CKDiscretionaryScheduler>
{
}

+ (id)scheduleOperationID:(id)arg1 group:(id)arg2 bundleID:(id)arg3 requiresPastBuddy:(_Bool)arg4 options:(id)arg5 state:(unsigned long long)arg6 queue:(id)arg7 startHandler:(CDUnknownBlockType)arg8 suspendHandler:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

