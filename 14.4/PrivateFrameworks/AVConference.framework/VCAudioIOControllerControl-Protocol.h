//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCBasebandCodecNotifications-Protocol.h>

@class VCAudioIOControllerClient;

@protocol VCAudioIOControllerControl <VCBasebandCodecNotifications>
- (void)updateClient:(VCAudioIOControllerClient *)arg1;
- (void)stopClient:(VCAudioIOControllerClient *)arg1;
- (void)startClient:(VCAudioIOControllerClient *)arg1;

@optional
- (void)refreshRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)refreshOutputMetering;
- (void)refreshInputMetering;
@end

