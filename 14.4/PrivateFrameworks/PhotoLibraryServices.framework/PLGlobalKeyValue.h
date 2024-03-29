//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString;
@protocol NSSecureCoding;

@interface PLGlobalKeyValue : PLManagedObject
{
}

+ (void)migrateLocaleIdentifierToGlobalKeyValues:(id)arg1 withPathManager:(id)arg2;
+ (id)_fetchGlobalKeyValuesForKeys:(id)arg1 withManagedObjectContext:(id)arg2;
+ (id)_fetchGlobalKeyValueForKey:(id)arg1 withManagedObjectContext:(id)arg2 createIfMissing:(_Bool)arg3;
+ (id)_globalValueForKeyValue:(id)arg1;
+ (void)_setGlobalValue:(id)arg1 forKeyValue:(id)arg2 managedObjectContext:(id)arg3;
+ (void)populateWithDictionary:(id)arg1 managedObjectContext:(id)arg2 replaceExisting:(_Bool)arg3;
+ (id)dictionaryWithManagedObjectContext:(id)arg1;
+ (id)globalValuesForKeys:(id)arg1 managedObjectContext:(id)arg2;
+ (id)globalValueForKey:(id)arg1 managedObjectContext:(id)arg2;
+ (void)setGlobalValue:(id)arg1 forKey:(id)arg2 managedObjectContext:(id)arg3;
+ (void)checkTypeForKey:(id)arg1 andValue:(id)arg2;
+ (short)typeForKey:(id)arg1;
+ (id)entityName;
- (_Bool)supportsCloudUpload;

// Remaining properties
@property(retain, nonatomic) id <NSSecureCoding> anyValue; // @dynamic anyValue;
@property(retain, nonatomic) NSNumber *boolValue; // @dynamic boolValue;
@property(retain, nonatomic) NSDate *dateValue; // @dynamic dateValue;
@property(retain, nonatomic) NSNumber *doubleValue; // @dynamic doubleValue;
@property(retain, nonatomic) NSNumber *integerValue; // @dynamic integerValue;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(nonatomic) short type; // @dynamic type;

@end

