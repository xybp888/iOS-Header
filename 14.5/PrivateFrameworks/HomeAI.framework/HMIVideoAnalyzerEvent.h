//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMIConfidence, NSDictionary, NSString;

@interface HMIVideoAnalyzerEvent : HMFObject <HMFLogging, NSSecureCoding>
{
    _Bool _hasMotionVectors;
    HMIConfidence *_confidence;
    NSDictionary *_userInfo;
    struct CGRect _boundingBox;
}

+ (Class)eventClassForShortName:(id)arg1;
+ (id)shortNameForEventClass:(Class)arg1;
+ (id)eventsWithContentsOfFile:(id)arg1;
+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (id)eventClasses;
+ (id)eventClassesArray;
- (void).cxx_destruct;
@property(readonly) _Bool hasMotionVectors; // @synthesize hasMotionVectors=_hasMotionVectors;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) HMIConfidence *confidence; // @synthesize confidence=_confidence;
@property(readonly) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) long long confidenceLevel;
- (id)shortDescription;
- (id)attributeDescriptions;
@property(readonly, copy) NSString *description;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2 hasMotionVectors:(_Bool)arg3 userInfo:(id)arg4;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2 hasMotionVectors:(_Bool)arg3;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

