//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRPlaybackQueue, MRPlayerPath, NSArray, NSDate;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying>
{
    unsigned int _playbackState;
    MRPlayerPath *_playerPath;
    NSArray *_supportedCommands;
    MRPlaybackQueue *_playbackQueue;
    NSDate *_deviceLastPlayingDate;
    NSDate *_playerLastPlayingDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *playerLastPlayingDate; // @synthesize playerLastPlayingDate=_playerLastPlayingDate;
@property(copy, nonatomic) NSDate *deviceLastPlayingDate; // @synthesize deviceLastPlayingDate=_deviceLastPlayingDate;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(copy, nonatomic) MRPlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(copy, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(copy, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSDate *lastPlayingDate;
@property(readonly, nonatomic) _Bool hasPlayedRecently;
@property(readonly, nonatomic) _Bool playerHasPlayedRecently;
@property(readonly, nonatomic) _Bool deviceHasPlayedRecently;

@end

