//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMSPIChat : NSObject
{
    _Bool _isGroup;
    _Bool _isBlackholed;
    NSString *_guid;
    NSString *_chatIdentifier;
    NSString *_serviceName;
    NSString *_displayName;
    NSArray *_handles;
}

+ (void)enumerateAllChatsWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *handles; // @synthesize handles=_handles;
@property(readonly) _Bool isBlackholed; // @synthesize isBlackholed=_isBlackholed;
@property _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain) NSString *chatIdentifier; // @synthesize chatIdentifier=_chatIdentifier;
@property(retain) NSString *guid; // @synthesize guid=_guid;
- (id)description;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct *)arg1;
- (void)enumerateAllMessagesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllAttachmentsWithBlock:(CDUnknownBlockType)arg1;

@end

