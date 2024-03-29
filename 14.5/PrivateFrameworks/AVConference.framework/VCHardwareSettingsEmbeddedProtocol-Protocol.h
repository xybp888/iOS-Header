//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCHardwareSettingsEmbeddedProtocol <NSObject>
@property(readonly, nonatomic) _Bool isHEVC444DecodeSupported;
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
@property(readonly, nonatomic) _Bool isSecondDisplaySupportEnabled;
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool hasAppleNeuralEngine;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) unsigned int maxMultiwayFramerateSupported;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) long long videoEncoderType;
@property(readonly, nonatomic) long long chipId;
@property(readonly, nonatomic) long long deviceClass;
@property(readonly, nonatomic) int screenHeight;
@property(readonly, nonatomic) int screenWidth;
@end

