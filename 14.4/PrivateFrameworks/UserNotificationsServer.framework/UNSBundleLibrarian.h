//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UNSBundleLibrarian : NSObject
{
    NSString *_bundleLibraryPath;
    NSMutableDictionary *_bundleToUUIDMap;
    NSMutableDictionary *_uuidToBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)_queue_saveDictionary:(id)arg1 atPath:(id)arg2;
- (id)_queue_dataAtPath:(id)arg1;
- (id)_queue_dictionaryAtPath:(id)arg1;
- (void)_queue_removeEntryForBundleIdentifier:(id)arg1;
- (void)_queue_addEntryForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)_queue_loadBundleLibrary;
- (void)_queue_loadBundleLibraryIfNeeded;
- (id)_queue_uniqueIdentifierForBundleIdentifier:(id)arg1;
- (id)_queue_bundleIdentifierForUniqueIdentifier:(id)arg1;
- (void)_removeBundleLibrary;
- (void)migrateRepositoriesInDirectory:(id)arg1;
- (void)removeMappingForBundleIdentifier:(id)arg1;
- (id)uniqueIdentifierForBundleIdentifier:(id)arg1;
- (id)bundleIdentifierForUniqueIdentifier:(id)arg1;
- (void)bootstrapLibraryForBundleIdentifiers:(id)arg1;
- (id)initWithDirectory:(id)arg1;

@end

