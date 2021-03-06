//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCALRowID, BRCItemID, BRCPrivateClientZone, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    unsigned long long _rowID;
    unsigned long long _processType;
    unsigned long long _batchSize;
    unsigned long long _failedSubitemsLeft;
    NSMutableArray *_sharedClientSubitems;
    NSMutableArray *_aliasItemsToDelete;
    NSMutableArray *_shareIDsToDelete;
    BRCPrivateClientZone *_rootClientZone;
    BRCItemID *_rootItemID;
    BRCALRowID *_appLibraryRowID;
    _Bool _isFSRoot;
    _Bool _alreadyHasShareID;
}

- (void).cxx_destruct;
- (void)main;
- (void)processClientTruthWithCompletion:(CDUnknownBlockType)arg1;
- (void)processServerTruthWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)arg1;
- (id)computeURLForItemID:(id)arg1 rootURL:(id)arg2;
- (_Bool)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)arg1;
- (void)removeSharedSubitemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1 processType:(unsigned long long)arg2 maxSubitemsToFail:(unsigned long long)arg3;
- (_Bool)shouldRetryForError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

