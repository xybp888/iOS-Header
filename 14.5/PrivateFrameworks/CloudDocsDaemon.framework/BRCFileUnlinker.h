//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFileUnlinker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

+ (id)fileUnlinker;
- (void).cxx_destruct;
- (_Bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (void)forcePurgeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_purge;
- (_Bool)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;
- (void)resume;
- (id)init;

@end

