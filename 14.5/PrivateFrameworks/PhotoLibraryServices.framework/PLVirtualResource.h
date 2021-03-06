//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLValidatesResourceModel-Protocol.h>
#import <PhotoLibraryServices/PLWriteableResource-Protocol.h>

@class NSDate, NSString, NSURL, PLVirtualResourceUniformTypeIdentifierProxy;
@protocol PLAssetID, PLCodecIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel>
{
    short _localAvailabilityTarget;
    short _remoteAvailability;
    short _remoteAvailabilityTarget;
    short _trashedState;
    unsigned int _version;
    unsigned int _resourceType;
    unsigned int _recipeID;
    unsigned int _orientation;
    int _qualitySortValue;
    float _scale;
    id <PLAssetID> _assetID;
    id <PLResourceDataStore> _dataStore;
    long long _dataStoreSubtype;
    id <PLResourceDataStoreKey> _dataStoreKey;
    long long _unorientedWidth;
    long long _unorientedHeight;
    id <PLCodecIdentity> _codecID;
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    NSDate *_trashedDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) short trashedState; // @synthesize trashedState=_trashedState;
@property(readonly, nonatomic) NSDate *trashedDate; // @synthesize trashedDate=_trashedDate;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int qualitySortValue; // @synthesize qualitySortValue=_qualitySortValue;
@property(retain, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; // @synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID;
@property(retain, nonatomic) id <PLCodecIdentity> codecID; // @synthesize codecID=_codecID;
@property(nonatomic) long long unorientedHeight; // @synthesize unorientedHeight=_unorientedHeight;
@property(nonatomic) long long unorientedWidth; // @synthesize unorientedWidth=_unorientedWidth;
@property(nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) short remoteAvailabilityTarget; // @synthesize remoteAvailabilityTarget=_remoteAvailabilityTarget;
@property(nonatomic) short remoteAvailability; // @synthesize remoteAvailability=_remoteAvailability;
@property(readonly, nonatomic) short localAvailabilityTarget; // @synthesize localAvailabilityTarget=_localAvailabilityTarget;
@property(retain, nonatomic) id <PLResourceDataStoreKey> dataStoreKey; // @synthesize dataStoreKey=_dataStoreKey;
@property(nonatomic) long long dataStoreSubtype; // @synthesize dataStoreSubtype=_dataStoreSubtype;
@property(retain, nonatomic) id <PLResourceDataStore> dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
@property(nonatomic) unsigned int resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) id <PLAssetID> assetID; // @synthesize assetID=_assetID;
@property(readonly, copy) NSString *debugDescription;
- (id)singleLineDescription;
- (id)photosCTLJSONDict;
@property(readonly, nonatomic) NSURL *fileURL;
- (_Bool)isInCloud;
- (float)scaleGivenAssetHasAdjustments:(_Bool)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
@property(readonly, nonatomic) PLVirtualResourceUniformTypeIdentifierProxy *uniformTypeIdentifier;
- (_Bool)isPlayableVideo;
@property(readonly, nonatomic) long long orientedHeight; // @dynamic orientedHeight;
@property(readonly, nonatomic) long long orientedWidth; // @dynamic orientedWidth;
@property(readonly, nonatomic) short localAvailability;
@property(readonly, nonatomic) long long estimatedDataLength; // @dynamic estimatedDataLength;
@property(readonly, nonatomic) long long dataLength; // @dynamic dataLength;
@property(readonly, nonatomic) unsigned long long cplType; // @dynamic cplType;
- (_Bool)isDerivative;
- (_Bool)isDefaultOrientation;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)initWithRecipe:(id)arg1 forAsset:(id)arg2;
- (id)initWithAsset:(id)arg1 resourceType:(unsigned int)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

