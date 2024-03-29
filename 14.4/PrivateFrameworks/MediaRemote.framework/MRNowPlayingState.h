//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRPlaybackQueue, MRPlaybackQueueRequest, MRPlayerPath, NSArray, NSData, NSDictionary, NSString, _MRSetStateMessageProtobuf;

@interface MRNowPlayingState : NSObject <NSCopying>
{
    _Bool _hasPlaybackState;
    _Bool _hasPlaybackStateTimestamp;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    MRPlaybackQueue *_playbackQueue;
    NSString *_displayID;
    NSString *_displayName;
    MRPlayerPath *_playerPath;
    MRPlaybackQueueRequest *_request;
    double _playbackStateTimestamp;
    unsigned long long _playbackQueueCapabilities;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long playbackQueueCapabilities; // @synthesize playbackQueueCapabilities=_playbackQueueCapabilities;
@property(nonatomic) double playbackStateTimestamp; // @synthesize playbackStateTimestamp=_playbackStateTimestamp;
@property(nonatomic) _Bool hasPlaybackStateTimestamp; // @synthesize hasPlaybackStateTimestamp=_hasPlaybackStateTimestamp;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) _Bool hasPlaybackState; // @synthesize hasPlaybackState=_hasPlaybackState;
@property(copy, nonatomic) MRPlaybackQueueRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(copy, nonatomic) MRPlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(copy, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
- (id)dictionaryRepresentation;
- (id)copyWithoutArtwork;
@property(readonly, nonatomic) _Bool containsArtwork;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRSetStateMessageProtobuf *protobuf;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;

@end

