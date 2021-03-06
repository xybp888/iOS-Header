//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "CKCodeOperationMessageMutation-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface CPLCKFeatureAvailabilityRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying>
{
    NSMutableArray *_features;
}

+ (Class)featuresType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (void)addFeatures:(id)arg1;
- (void)clearFeatures;
- (void)substituteRecordTransports:(id)arg1;
- (id)extractRecordTransports;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

