//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureMovieFileOutput.h>

#import <CameraUI/AVCaptureFileOutputRecordingDelegate-Protocol.h>

@class CAMCaptureEngine, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol AVCaptureFileOutputRecordingDelegate, OS_dispatch_queue;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate>
{
    CAMCaptureEngine *__captureEngine;
    NSObject<OS_dispatch_queue> *__userInfoQueue;
    NSMutableDictionary *__userInfoBySettingsID;
    NSMutableArray *__removeOnCompletionSettingsIDs;
    NSDictionary *_currentUserInfo;
    NSDictionary *_userInfoForNextCapture;
    id <AVCaptureFileOutputRecordingDelegate> _wrappedDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AVCaptureFileOutputRecordingDelegate> wrappedDelegate; // @synthesize wrappedDelegate=_wrappedDelegate;
@property(copy, nonatomic) NSDictionary *userInfoForNextCapture; // @synthesize userInfoForNextCapture=_userInfoForNextCapture;
@property(copy, nonatomic) NSDictionary *currentUserInfo; // @synthesize currentUserInfo=_currentUserInfo;
@property(readonly, nonatomic) NSMutableArray *_removeOnCompletionSettingsIDs; // @synthesize _removeOnCompletionSettingsIDs=__removeOnCompletionSettingsIDs;
@property(readonly, nonatomic) NSMutableDictionary *_userInfoBySettingsID; // @synthesize _userInfoBySettingsID=__userInfoBySettingsID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_userInfoQueue; // @synthesize _userInfoQueue=__userInfoQueue;
@property(readonly, nonatomic) __weak CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
@property(copy, nonatomic) NSDictionary *userInfo;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (id)initWithEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

