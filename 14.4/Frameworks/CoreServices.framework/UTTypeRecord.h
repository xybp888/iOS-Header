//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSRecord.h>

@class LSBundleRecord, LSPropertyList, NSData, NSDictionary, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, _LSLocalizedStringRecord;

@interface UTTypeRecord : LSRecord
{
}

+ (id)_propertyClasses;
+ (id)_typeRecordWithContext:(struct LSContext *)arg1 forPromiseResourceValues:(id)arg2 error:(id *)arg3;
+ (id)_typeRecordWithContext:(struct LSContext *)arg1 forPromiseAtNode:(id)arg2 error:(id *)arg3;
+ (_Bool)_typeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2;
+ (id)_typeRecordWithContext:(struct LSContext *)arg1 identifier:(id)arg2;
+ (id)typeRecordForPromiseAtURL:(id)arg1 error:(id *)arg2;
+ (id)typeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2;
+ (id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2;
+ (id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2;
+ (id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3;
+ (id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3;
+ (id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToTypeRecord:(id)arg3;
+ (id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToTypeRecord:(id)arg3;
+ (id)typeRecordsWithIdentifiers:(id)arg1;
+ (id)typeRecordWithIdentifier:(id)arg1;
+ (id)enumerator;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;
- (void)_enumerateRelatedTypesWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly) NSString *_delegatePath;
@property(readonly) NSData *_declaringBundleBookmark;
@property(readonly) _LSLocalizedStringRecord *_localizedDescription;
@property(readonly) NSDictionary *localizedDescriptionDictionary;
- (id)localizedDescriptionWithPreferredLocalizations:(id)arg1;
@property(readonly) NSString *localizedDescription;
- (void)enumerateChildTypesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateParentTypesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDescendantsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePedigreeWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isChildOfTypeIdentifier:(id)arg1;
@property(readonly) NSSet *childTypeIdentifiers;
@property(readonly) NSOrderedSet *parentTypeIdentifiers;
@property(readonly) NSSet *pedigree;
- (_Bool)conformsToTypeIdentifier:(id)arg1;
- (_Bool)conformsToTypeRecord:(id)arg1;
@property(readonly) NSURL *referenceURL;
- (id)preferredTagOfClass:(id)arg1;
@property(readonly) LSPropertyList *tagSpecification;
@property(readonly) LSPropertyList *declaration;
@property(readonly) LSBundleRecord *declaringBundleRecord;
@property(readonly, getter=isCoreType) _Bool coreType;
@property(readonly, getter=isActive) _Bool active;
@property(readonly, getter=isImported) _Bool imported;
@property(readonly, getter=isExported) _Bool exported;
@property(readonly, getter=isInPublicDomain) _Bool inPublicDomain;
@property(readonly, getter=isWildcard) _Bool wildcard;
@property(readonly, getter=isDeclared) _Bool declared;
@property(readonly, getter=isDynamic) _Bool dynamic;
@property(readonly) NSNumber *version;
@property(readonly) NSString *identifier;
- (void)_LSRecord_resolve_iconResourceBundleURL;
@property(readonly) NSURL *iconResourceBundleURL;
- (id)iconResourceBundleURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve_iconDictionary;
@property(readonly) NSDictionary *iconDictionary;
- (id)iconDictionaryWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;

// Remaining properties
@property(readonly, nonatomic) id compatibilityObject; // @dynamic compatibilityObject;

@end

