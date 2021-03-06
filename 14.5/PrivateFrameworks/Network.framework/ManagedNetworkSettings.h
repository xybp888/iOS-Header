//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ManagedNetworkSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedMNS;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;
- (void)handleEvent:(id)arg1;
- (id)init;

@end

