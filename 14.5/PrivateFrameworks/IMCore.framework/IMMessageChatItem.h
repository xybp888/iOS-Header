//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMMessageChatItem-Protocol.h>

@class IMHandle, IMMessage, NSDate, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
}

- (_Bool)canReply;
@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) _Bool failed;
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, nonatomic) IMMessage *message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

