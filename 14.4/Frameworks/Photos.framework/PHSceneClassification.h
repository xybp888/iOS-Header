//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHSceneClassification : NSObject
{
    unsigned int _sceneIdentifier;
    double _confidence;
    long long _packedBoundingBoxRect;
    struct CGRect _boundingBox;
}

+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
@property(nonatomic) long long packedBoundingBoxRect; // @synthesize packedBoundingBoxRect=_packedBoundingBoxRect;
@property(readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned int sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSceneClassification:(id)arg1;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect)arg3;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2;

@end

