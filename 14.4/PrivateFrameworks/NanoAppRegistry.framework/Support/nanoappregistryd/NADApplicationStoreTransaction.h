//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NADApplicationStoreTransaction-Protocol.h"

@class NADApplicationStore, NSString;
@protocol OS_dispatch_queue;

@interface NADApplicationStoreTransaction : NSObject <NADApplicationStoreTransaction>
{
    _Bool _finalized;
    NADApplicationStore *_applicationStore;
    NSObject<OS_dispatch_queue> *_commandQueue;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) NADApplicationStore *applicationStore; // @synthesize applicationStore=_applicationStore;
- (void)_flushCommandQueue;
- (void)rollback;
- (_Bool)commit:(id *)arg1;
- (void)setSequenceNumber:(id)arg1 UUID:(id)arg2;
- (void)removeApplicationWithBundleIdentifier:(id)arg1;
- (void)insertApplication:(id)arg1;
- (void)removeAllEntities;
- (id)initWithApplicationStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

