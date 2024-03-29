//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVDonateTaskProvider-Protocol.h>

@class NSString;
@protocol CKVDonatorProvider, OS_dispatch_queue;

@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVDonatorProvider> *_donatorProvider;
}

- (void).cxx_destruct;
- (id)appInfoDonateTask;
- (id)contactsDonateTask;
- (id)intentVocabularyDonateTask;
- (id)init;
- (id)initWithQueue:(id)arg1 serviceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

