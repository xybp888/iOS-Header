//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPCloudContainer.h>

@interface MSPReadOnlyCloudContainer : MSPCloudContainer
{
}

- (void)pushChanges:(id)arg1 withGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeCloudContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupCloudContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

