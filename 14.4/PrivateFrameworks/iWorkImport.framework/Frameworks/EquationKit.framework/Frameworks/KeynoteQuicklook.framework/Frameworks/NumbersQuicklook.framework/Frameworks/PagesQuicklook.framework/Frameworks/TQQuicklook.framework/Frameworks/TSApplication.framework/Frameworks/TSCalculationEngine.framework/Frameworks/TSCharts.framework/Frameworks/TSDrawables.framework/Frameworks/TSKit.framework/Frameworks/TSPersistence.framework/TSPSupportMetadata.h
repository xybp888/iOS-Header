//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSMutableSet, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface TSPSupportMetadata : TSPObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_acknowledgedServerData;
    _Bool _isInCollaborationModeForArchiving;
    NSSet *_acknowledgedServerDataForArchiving;
}

- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)takeSnapshotWithCollaborationMode:(_Bool)arg1;
- (id)packageLocator;
- (unsigned char)componentRequiredPackageIdentifier;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)arg1;
- (void)setData:(id)arg1 acknowledgedByServer:(_Bool)arg2;
- (void)isDataAcknowledgedByServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isDataAcknowledgedByServer:(id)arg1;
- (void)resetAcknowledgedServerData;
- (id)initWithContext:(id)arg1;
- (void)commonInit;

@end

