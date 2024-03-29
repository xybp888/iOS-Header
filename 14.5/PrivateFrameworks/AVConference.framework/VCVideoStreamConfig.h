//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStreamConfig.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig : VCMediaStreamConfig
{
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _txInitialBitrate;
    unsigned long long _rxMaxBitrate;
    unsigned long long _rxMinBitrate;
    unsigned long long _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    _Bool _enableCVO;
    unsigned long long _cvoExtensionID;
    _Bool _isVideoProtected;
    long long _type;
    unsigned long long _sourceFramerate;
    int _encodingMode;
    _Atomic unsigned char *_videoPriorityPointer;
    int _captureSource;
    unsigned int _screenDisplayID;
    unsigned long long _customWidth;
    unsigned long long _customHeight;
    NSMutableDictionary *_rxCodecFeatureListStrings;
    NSMutableDictionary *_txCodecFeatureListStrings;
    unsigned long long _tilesPerFrame;
    unsigned int _pixelFormat;
    _Bool _ltrpEnabled;
    int _hdrMode;
    NSString *_remoteDeviceName;
}

+ (_Bool)validateClientDictionary:(id)arg1;
@property(retain, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) int captureSource; // @synthesize captureSource=_captureSource;
@property(nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) unsigned long long sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly, nonatomic) NSDictionary *txCodecFeatureListStrings; // @synthesize txCodecFeatureListStrings=_txCodecFeatureListStrings;
@property(readonly, nonatomic) NSDictionary *rxCodecFeatureListStrings; // @synthesize rxCodecFeatureListStrings=_rxCodecFeatureListStrings;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long txInitialBitrate; // @synthesize txInitialBitrate=_txInitialBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;
- (void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;
- (_Bool)updateWithClientDictionary:(id)arg1;
- (_Bool)applyVideoStreamClientDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;
- (id)init;

@end

