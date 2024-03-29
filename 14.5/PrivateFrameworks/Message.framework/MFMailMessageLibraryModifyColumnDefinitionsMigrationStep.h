//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
- (_Bool)performMigrationStep;
- (id)actionFlagsTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionMessagesTableSchema;
- (id)localMessageActionsTableSchema;
- (id)serverLabelsTableSchema;
- (id)serverMessagesTableSchema;
- (id)mailboxesTableStubSchema;
- (id)messagesTableStubSchema;
@property(readonly, nonatomic) EFSQLSchema *schema;
- (id)initWithSQLiteConnection:(id)arg1;

@end

