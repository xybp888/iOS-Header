//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerLayer.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface ISAVPlayerLayer : AVPlayerLayer
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CDUnknownBlockType _readyForDisplayChangeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType readyForDisplayChangeHandler; // @synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler;
- (void)setPlayer:(id)arg1;
- (void)setWrappedPlayer:(id)arg1;
- (void)deferredDealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;

@end

