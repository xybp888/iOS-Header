//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class TKVibrationRecorderTouchSurface;

@protocol TKVibrationRecorderTouchSurfaceDelegate <NSObject>
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(TKVibrationRecorderTouchSurface *)arg1;
- (void)vibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1;
- (_Bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(TKVibrationRecorderTouchSurface *)arg1;
@end

