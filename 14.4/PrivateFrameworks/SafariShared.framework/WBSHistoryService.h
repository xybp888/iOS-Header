//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSXPCListenerDelegate-Protocol.h>

@class NSCountedSet, NSDate, NSMutableDictionary, NSString, NSURL, NSXPCListener, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore;
@protocol OS_dispatch_queue;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSMutableDictionary *_openedDatabases;
    NSCountedSet *_openedDatabasesRefCounts;
    NSDate *_initDate;
    WBSHistoryDatabaseAccessBroker *_databaseAccessBroker;
    WBSHistoryURLCompletionDataStore *_urlCompletionDataStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WBSHistoryURLCompletionDataStore *urlCompletionDataStore; // @synthesize urlCompletionDataStore=_urlCompletionDataStore;
@property(readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker; // @synthesize databaseAccessBroker=_databaseAccessBroker;
- (void)disconnectDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)connectWithOptions:(id)arg1 connection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_openOrReuseExistingDatabaseWithOptions:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSURL *databaseURL;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_connectionIsEntitledToUseUserDatabase:(id)arg1;
- (void)shutdown;
- (void)resume;
- (id)_createListener;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

