//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload
{
}

+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)payloadClassID;
+ (id)modelProperties;
+ (id)nonPersistedModelPropertiesDescription;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)arg1;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)_fixHasLocationSmartAlbum;

@end

