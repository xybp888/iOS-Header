//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFTemporaryFileManager : NSObject
{
}

+ (id)createSharedTemporaryFileWithFilename:(id)arg1;
+ (id)createTemporaryFileWithFilename:(id)arg1;
+ (id)createTemporaryFileWithFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)createTemporaryDirectoryWithFilename:(id)arg1;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)arg1;
+ (id)createTemporaryDirectoryWithFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)arg1;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)arg1 isDirectory:(_Bool)arg2;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1 isDirectory:(_Bool)arg2;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(_Bool)arg3;
+ (id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(_Bool)arg3;
+ (void)clearTemporaryFiles;
+ (void)setUpDirectories;
+ (void)configureBackupFlagAtURL:(id)arg1;
+ (void)configureFileProtectionAtPath:(id)arg1;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)createSharedDirectoryIfNecessary;
+ (id)sharedTemporaryDirectoryURL;
+ (id)temporaryDirectoryURL;
+ (id)sharedAppGroupDirectoryURL;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1 error:(id *)arg2;
+ (id)appGroupIdentifier;

@end

