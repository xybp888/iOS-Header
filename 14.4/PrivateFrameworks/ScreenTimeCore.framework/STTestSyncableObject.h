//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUniquedManagedObject.h>

#import <ScreenTimeCore/STSerializableMappedObject-Protocol.h>
#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSSet, NSString;

@interface STTestSyncableObject : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>
{
}

+ (id)serializableClassName;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *subobjects; // @dynamic subobjects;
@property(readonly) Class superclass;

@end

