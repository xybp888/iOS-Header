//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface WBSHistoryDatabaseAccessBroker : NSObject
{
    NSURL *_historyDatabaseURL;
    NSObject<OS_dispatch_queue> *_writeRequestQueue;
}

- (void).cxx_destruct;
- (id)databaseLastModifiedDate;
- (id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id *)arg3;
- (void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(CDUnknownBlockType)arg3;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithHistoryDatabaseURL:(id)arg1;
- (id)init;

@end

