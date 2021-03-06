//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSObject, NSSet, NSString, PHFetchResult, PHPhotoLibrary;
@protocol HMDPhotoLibraryChangeDelegate, OS_dispatch_queue;

@interface HMDPhotoLibrary : HMFObject <HMFLogging, PHPhotoLibraryChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
    id <HMDPhotoLibraryChangeDelegate> _photoLibraryChangeDelegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    PHFetchResult *_suggestedPersonsFetchResult;
}

+ (id)logCategory;
+ (id)_phPersonWithUUID:(id)arg1 fromSuggestedPersonsFetchResult:(id)arg2;
- (void).cxx_destruct;
@property(retain) PHFetchResult *suggestedPersonsFetchResult; // @synthesize suggestedPersonsFetchResult=_suggestedPersonsFetchResult;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)photoLibraryDidChange:(id)arg1;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)releaseCachedResources;
- (id)faceCropFromFaceCropData:(id)arg1;
- (unsigned long long)numberOfFaceCropsForPersonWithUUID:(id)arg1;
- (id)fetchFaceCropDataByUUIDForPersonUUID:(id)arg1;
- (void)fetchPersons;
@property __weak id <HMDPhotoLibraryChangeDelegate> photoLibraryChangeDelegate; // @synthesize photoLibraryChangeDelegate=_photoLibraryChangeDelegate;
@property(readonly, copy) NSSet *persons;
- (id)initWithWorkQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

