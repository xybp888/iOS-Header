//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFObject-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol HMIPersonManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMIFetchFaceprintsForFaceCropsOperation : HMFOperation <HMFObject, HMFLogging>
{
    id <HMIPersonManagerDataSource> _dataSource;
    NSSet *_faceCropUUIDs;
    NSSet *_faceprints;
}

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly) NSSet *faceprints; // @synthesize faceprints=_faceprints;
@property(readonly) NSSet *faceCropUUIDs; // @synthesize faceCropUUIDs=_faceCropUUIDs;
@property(readonly) id <HMIPersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)main;
- (id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

