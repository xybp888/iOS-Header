//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EDPersistenceDatabaseGenerationWindow, EMMailboxObjectID;

@protocol EDMailboxChangeHookResponder <NSObject>

@optional
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
@end

