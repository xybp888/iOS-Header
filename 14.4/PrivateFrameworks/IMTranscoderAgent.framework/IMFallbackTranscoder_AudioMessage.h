//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMFallbackTranscoder_AudioMessage : NSObject
{
}

- (void)_failWithOSStatusErrorCode:(int)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_tmpOutputFileURL;
- (void)transcodeOpusFile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

