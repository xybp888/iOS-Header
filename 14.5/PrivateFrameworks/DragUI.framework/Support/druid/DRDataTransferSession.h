//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBDataTransferMonitorDelegate-Protocol.h"

@class DRProcessInfo, NSMutableArray, NSString, PBDataTransferMonitor, PBItemCollection;
@protocol DRDataTransferSessionDelegate;

@interface DRDataTransferSession : NSObject <PBDataTransferMonitorDelegate>
{
    DRProcessInfo *_sourceProcessInfo;
    DRProcessInfo *_destinationProcessInfo;
    PBItemCollection *_destinationItemCollection;
    PBDataTransferMonitor *_dataTransferMonitor;
    NSMutableArray *_transferQueue_requestsQueue;
    NSMutableArray *_transferQueue_requestsInProgress;
    _Bool _transferQueue_canTellDelegateAboutFinishedTransfers;
    _Bool _transferQueue_shouldSendBeganCallback;
    _Bool _transferQueue_shouldSendFinishedCallback;
    id <DRDataTransferSessionDelegate> _delegate;
    PBItemCollection *_sourceItemCollection;
}

+ (_Bool)_shouldRestrictOpenInPlaceFor:(id)arg1 destinationAuditToken:(CDStruct_4c969caf)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) DRProcessInfo *destinationProcessInfo; // @synthesize destinationProcessInfo=_destinationProcessInfo;
@property(readonly, nonatomic) DRProcessInfo *sourceProcessInfo; // @synthesize sourceProcessInfo=_sourceProcessInfo;
@property(retain, nonatomic) PBItemCollection *sourceItemCollection; // @synthesize sourceItemCollection=_sourceItemCollection;
@property(nonatomic) __weak id <DRDataTransferSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDataProviderEndpoint:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;
- (void)dataTransferMonitorBeganTransfers:(id)arg1;
- (void)cancelDataTransfer;
- (void)startSendingDelegateCallbacks;
- (void)_transferQueue_sendDelegateCallbacksIfNeeded;
- (void)_transferQueue_scheduleNextTransfer;
- (id)_registerRequestFromSourceItem:(id)arg1 typeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupItem:(id)arg1 forLoadingFromSourceItem:(id)arg2 destinationBundleID:(id)arg3 destinationAuditToken:(CDStruct_4c969caf)arg4 destinationIsSameTeam:(_Bool)arg5 destinationIsSameProcess:(_Bool)arg6 destinationIsAppleProcess:(_Bool)arg7;
- (id)destinationDataProviderEndpoint;
- (id)_copyItemCollectionForDestination;
- (void)clearDestinationAuditToken;
@property(readonly, nonatomic) PBItemCollection *destinationItemCollection;
- (_Bool)setDestinationAuditToken:(CDStruct_4c969caf)arg1;
- (id)initWithSourceItemCollection:(id)arg1 sourceAuditToken:(CDStruct_4c969caf)arg2 dataProviderEndpoint:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

