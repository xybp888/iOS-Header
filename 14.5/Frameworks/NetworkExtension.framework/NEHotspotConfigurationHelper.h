//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEHelper;
@protocol OS_dispatch_queue;

@interface NEHotspotConfigurationHelper : NSObject
{
    NEHelper *_helper;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)processQueryNetworksResponse:(id)arg1;
- (id)createXPCRequest:(id)arg1 requestType:(long long)arg2;
- (id)init;
@property(readonly) NEHelper *helper;

@end

