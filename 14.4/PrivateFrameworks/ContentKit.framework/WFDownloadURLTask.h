//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSURLSessionDownloadDelegate-Protocol.h>

@class NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface WFDownloadURLTask : NSObject <NSURLSessionDownloadDelegate>
{
    NSURLRequest *_request;
    CDUnknownBlockType _expectedByteCountHandler;
    CDUnknownBlockType _writtenByteCountHandler;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType writtenByteCountHandler; // @synthesize writtenByteCountHandler=_writtenByteCountHandler;
@property(copy, nonatomic) CDUnknownBlockType expectedByteCountHandler; // @synthesize expectedByteCountHandler=_expectedByteCountHandler;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)start;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

