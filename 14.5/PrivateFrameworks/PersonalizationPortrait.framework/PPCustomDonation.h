//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPCustomDonation : NSObject
{
}

+ (void)donateLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (_Bool)donateParsecNamedEntitiesAndTopics:(id)arg1 rawQuery:(id)arg2 reformulatedQuery:(id)arg3 source:(id)arg4 error:(id *)arg5;
+ (_Bool)donatePhotosTopics:(id)arg1 bundleId:(id)arg2 date:(id)arg3 error:(id *)arg4;
+ (id)_photosTopicMap;
+ (_Bool)donatePhotosNamedEntities:(id)arg1 bundleId:(id)arg2 date:(id)arg3 error:(id *)arg4;
+ (_Bool)donatePhotosLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
+ (_Bool)donatePhotosOneUpLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
+ (_Bool)donateNotification:(id)arg1 error:(id *)arg2;
+ (_Bool)donateSiriQuery:(id)arg1 results:(id)arg2 error:(id *)arg3;

@end

