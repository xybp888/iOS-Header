//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _HDSQLiteDatabaseWrapper : NSObject
{
    HDSQLiteDatabase *_database;
    NSObject<OS_dispatch_group> *_flushGroup;
    unsigned long long _generation;
    unsigned long long _threadID;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *flushGroup; // @synthesize flushGroup=_flushGroup;
@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
@property(readonly, copy, nonatomic) NSString *typeString;
- (void)captureThreadInfo;
- (id)initWithDatabase:(id)arg1 flushGroup:(id)arg2 generation:(unsigned long long)arg3;

@end

