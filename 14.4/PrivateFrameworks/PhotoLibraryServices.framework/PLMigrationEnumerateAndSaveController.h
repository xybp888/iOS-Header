//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSFetchRequest, NSManagedObjectContext, NSOperationQueue, NSString, PLModelMigrator, PLPhotoLibraryBundle;

@interface PLMigrationEnumerateAndSaveController : NSObject
{
    _Bool _succeeded;
    NSString *_operationName;
    PLModelMigrator *_migrator;
    NSManagedObjectContext *_originalContext;
    PLPhotoLibraryBundle *_migrationBundle;
    NSFetchRequest *_originalFetchRequest;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _processResultsBlock;
    NSError *_firstError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *firstError; // @synthesize firstError=_firstError;
@property(nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(copy, nonatomic) CDUnknownBlockType processResultsBlock; // @synthesize processResultsBlock=_processResultsBlock;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSFetchRequest *originalFetchRequest; // @synthesize originalFetchRequest=_originalFetchRequest;
@property(retain, nonatomic) PLPhotoLibraryBundle *migrationBundle; // @synthesize migrationBundle=_migrationBundle;
@property(retain, nonatomic) NSManagedObjectContext *originalContext; // @synthesize originalContext=_originalContext;
@property(retain, nonatomic) PLModelMigrator *migrator; // @synthesize migrator=_migrator;
@property(retain, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
- (_Bool)processObjectsWithError:(id *)arg1;
- (void)_runOperationWithObjectIDs:(id)arg1;
- (id)initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 modelMigrator:(id)arg4 concurrent:(_Bool)arg5 processResultBlock:(CDUnknownBlockType)arg6;

@end

