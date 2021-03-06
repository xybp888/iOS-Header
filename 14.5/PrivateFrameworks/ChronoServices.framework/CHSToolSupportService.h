//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CHSChronoToolServiceServer;

@interface CHSToolSupportService : NSObject
{
    id <CHSChronoToolServiceServer> _server;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CHSChronoToolServiceServer> server; // @synthesize server=_server;
- (void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)timelineForWidgetKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)widgetsWithTimelines:(CDUnknownBlockType)arg1;
- (void)extensionInfo:(CDUnknownBlockType)arg1;
- (void)extensionInfoForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStateForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)listStateCaptureIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetWakeBudgetWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableWakeBudgetWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetCaches:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServer:(id)arg1;
- (id)init;

@end

