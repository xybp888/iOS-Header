//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSString, PLAdditionalAssetAttributes, PLPerson;

@interface PLPersonReference : PLManagedObject
{
}

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) PLPerson *person; // @dynamic person;
@property(retain, nonatomic) NSData *personData; // @dynamic personData;
@property(retain, nonatomic) NSString *personUUID; // @dynamic personUUID;

@end

