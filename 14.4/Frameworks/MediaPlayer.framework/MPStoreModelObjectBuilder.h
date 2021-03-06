//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject
{
    _Bool _preventStoreItemMetadataCaching;
    MPPropertySet *_requestedPropertySet;
}

+ (id)allSupportedProperties;
- (void).cxx_destruct;
@property(nonatomic) _Bool preventStoreItemMetadataCaching; // @synthesize preventStoreItemMetadataCaching=_preventStoreItemMetadataCaching;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1 userIdentity:(id)arg2;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 userIdentity:(id)arg2;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (id)initWithRequestedPropertySet:(id)arg1;

@end

