//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICDelegationConsumerService : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_activeSessions;
}

- (void).cxx_destruct;
- (void)performRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

