//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand
{
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    _Bool _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_supportedInsertionPositions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedSharedQueue:(_Bool)arg1;
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;
- (void)unregisterSupportedQueueType:(long long)arg1;
- (void)registerSupportedQueueType:(long long)arg1;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;

@end

