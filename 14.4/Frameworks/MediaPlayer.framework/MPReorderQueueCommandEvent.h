//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent
{
    NSString *_insertBeforeContextItemID;
    NSString *_insertAfterContextItemID;
    long long _destinationOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long destinationOffset; // @synthesize destinationOffset=_destinationOffset;
@property(readonly, nonatomic) NSString *insertAfterContextItemID; // @synthesize insertAfterContextItemID=_insertAfterContextItemID;
@property(readonly, nonatomic) NSString *insertBeforeContextItemID; // @synthesize insertBeforeContextItemID=_insertBeforeContextItemID;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

