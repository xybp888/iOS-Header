//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface UMTask : NSObject
{
    _Bool _isFinished;
    int _pid;
    NSString *_name;
    NSString *_reason;
    NSString *_bundleID;
    NSUUID *_uuid;
}

+ (id)taskWithName:(id)arg1 reason:(id)arg2 forBundleID:(id)arg3;
+ (id)taskWithName:(id)arg1 reason:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)end;
- (void)begin;
- (id)init;

@end

