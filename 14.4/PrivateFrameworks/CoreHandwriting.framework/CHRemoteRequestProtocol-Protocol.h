//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CHRemoteRecognitionRequest, CHTokenizedTextResult;

@protocol CHRemoteRequestProtocol
- (void)transcriptionPathsForTokenizedResult:(CHTokenizedTextResult *)arg1 recognitionRequest:(CHRemoteRecognitionRequest *)arg2 withReply:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)handleRecognitionRequest:(CHRemoteRecognitionRequest *)arg1 withReply:(void (^)(CHTokenizedTextResult *, NSError *))arg2;
@end

