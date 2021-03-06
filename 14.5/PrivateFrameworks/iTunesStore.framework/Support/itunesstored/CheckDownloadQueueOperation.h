//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class StoreDownloadQueueRequest;

@interface CheckDownloadQueueOperation : ISOperation
{
    long long _numberOfAvailableDownloads;
    StoreDownloadQueueRequest *_request;
}

- (void)_runPendingCancelDownloadOperations;
- (id)_newURLOperation;
- (id)_account;
- (void)run;
@property(readonly) long long numberOfAvailableDownloads;
@property(readonly) StoreDownloadQueueRequest *downloadQueueRequest;
- (void)dealloc;
- (id)initWithDownloadQueueRequest:(id)arg1;
- (id)init;

@end

