//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChangeTracking-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, SYLegacyStore;
@protocol OS_os_transaction;

@interface SYTransaction : NSObject <SYChangeTracking>
{
    _Atomic _Bool _inTransaction;
    NSObject<OS_os_transaction> *_transaction;
    NSDictionary *_contextInfo;
    NSDictionary *_idsOptions;
    CDUnknownBlockType _completion;
    SYLegacyStore *_store;
    NSMutableArray *_changes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) SYLegacyStore *store; // @synthesize store=_store;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
- (void)_transactionDidComplete:(_Bool)arg1;
- (void)rollback;
- (void)commitBlocking:(_Bool)arg1 reportError:(CDUnknownBlockType)arg2;
- (void)commit;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)changeList;
- (_Bool)_endTransaction;
- (_Bool)_beginTransaction;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

