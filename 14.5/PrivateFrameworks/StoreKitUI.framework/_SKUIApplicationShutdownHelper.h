//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIApplicationController;

__attribute__((visibility("hidden")))
@interface _SKUIApplicationShutdownHelper : NSObject
{
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithApplicationController:(id)arg1;

@end

