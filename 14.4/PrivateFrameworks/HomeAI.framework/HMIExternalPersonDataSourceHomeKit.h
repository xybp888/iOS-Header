//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIExternalPersonManagerDataSource-Protocol.h>

@class HMPhotosPersonManager, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMIExternalPersonDataSourceHomeKit : HMFObject <HMIExternalPersonManagerDataSource, HMFLogging>
{
    HMPhotosPersonManager *_photosPersonManager;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMPhotosPersonManager *photosPersonManager; // @synthesize photosPersonManager=_photosPersonManager;
- (id)logIdentifier;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHMPhotosPersonManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

