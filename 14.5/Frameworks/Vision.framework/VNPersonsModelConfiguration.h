//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _maximumIdentities;
    unsigned long long _maximumTrainingFaceprintsPerIdentity;
    unsigned long long _faceprintRequestRevision;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (unsigned long long)maximumAllowableIdentities;
@property(nonatomic) unsigned long long faceprintRequestRevision; // @synthesize faceprintRequestRevision=_faceprintRequestRevision;
@property(nonatomic) unsigned long long maximumIdentities; // @synthesize maximumIdentities=_maximumIdentities;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity; // @synthesize maximumTrainingFaceprintsPerIdentity=_maximumTrainingFaceprintsPerIdentity;
- (id)init;
- (int)faceIDModelMaximumElementsPerID;

@end

