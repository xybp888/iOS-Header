//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NviConstants : NSObject
{
}

+ (id)nviLogsRootDir;
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)monoChannelLpcmASBD;
+ (unsigned int)nviDirectionalityEndingChannelId;
+ (unsigned int)nviDirectionalityStartingChannelId;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)numChannelsForNviDirectionality;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingSampleRate;

@end

