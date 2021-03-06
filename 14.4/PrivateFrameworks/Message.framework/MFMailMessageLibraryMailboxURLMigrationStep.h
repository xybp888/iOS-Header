//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_sqliteConnection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EDPersistenceDatabaseConnection *sqliteConnection; // @synthesize sqliteConnection=_sqliteConnection;
- (void)_purgeFoldersMatchingPatterns:(id)arg1;
- (_Bool)_updateMailboxURLsInSQLitedb:(struct sqlite3 *)arg1 withOldURLToNewURLMap:(id)arg2;
- (_Bool)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(struct sqlite3 *)arg2;
- (_Bool)_renameMailboxDataFolders:(struct sqlite3 *)arg1;
- (_Bool)performMigrationStep;
- (id)initWithSQLiteConnection:(id)arg1;

@end

