//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray, NSString;

@interface MPSetPlaybackSessionCommand : MPRemoteCommand
{
    NSString *_currentPlaybackSessionIdentifier;
    NSString *_currentPlaybackSessionRevision;
    NSArray *_exportableSessionTypes;
    NSArray *_supportedSessionTypes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *supportedSessionTypes; // @synthesize supportedSessionTypes=_supportedSessionTypes;
@property(copy, nonatomic) NSArray *exportableSessionTypes; // @synthesize exportableSessionTypes=_exportableSessionTypes;
@property(copy, nonatomic) NSString *currentPlaybackSessionRevision; // @synthesize currentPlaybackSessionRevision=_currentPlaybackSessionRevision;
@property(copy, nonatomic) NSString *currentPlaybackSessionIdentifier; // @synthesize currentPlaybackSessionIdentifier=_currentPlaybackSessionIdentifier;
- (id)_mediaRemoteCommandInfoOptions;

@end

