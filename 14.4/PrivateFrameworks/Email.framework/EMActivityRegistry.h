//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EMRemoteConnection, NSMapTable;

@interface EMActivityRegistry : NSObject
{
    NSMapTable *_observerWrappersByObserver;
    struct os_unfair_lock_s _lock;
    EMRemoteConnection *_connection;
}

+ (id)observerInterface;
+ (id)remoteInterface;
- (void).cxx_destruct;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (id)registerActivityObserver:(id)arg1;
- (id)initWithRemoteConnection:(id)arg1;

@end

