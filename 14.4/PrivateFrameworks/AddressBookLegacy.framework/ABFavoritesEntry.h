//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABFavoritesEntry : NSObject
{
    int _abUid;
    int _abIdentifier;
    NSString *_value;
    int _property;
    int _type;
    unsigned int _dirty:1;
    NSString *_label;
    NSString *_name;
    NSString *_abDatabaseUUID;
    void *_addressBook;
}

+ (void)_runLookup;
- (void)recheckAddressBook;
- (_Bool)isEqual:(id)arg1;
- (int)_abUid;
- (void *)ABPerson;
- (int)type;
- (int)identifier;
- (id)value;
- (id)nonLocalizedLabel;
- (id)label;
- (int)property;
- (id)displayName;
- (void)dictionaryRepresentation:(id *)arg1 isDirty:(_Bool *)arg2;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void *)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4;
- (id)initWithPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)_lookupChanged:(id)arg1;
- (void)_lookupNotFound;
- (void)_postEntryChanged;
- (void)_unqueueLookup;
- (void)_queueLookup;

@end

