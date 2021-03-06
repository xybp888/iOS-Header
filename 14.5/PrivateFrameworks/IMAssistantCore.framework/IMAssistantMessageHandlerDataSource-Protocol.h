//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class IMChat, NSArray, NSCache;
@protocol IMAssistantAccountDataSource, IMAssistantChatDataSource, IMAssistantContactsDataSource, IMAssistantCoreTelephonySubscriptionsDataSource, IMAssistantFileManager, IMFileTransferCenter, IMLocationManager;

@protocol IMAssistantMessageHandlerDataSource <NSObject>
@property(readonly, nonatomic) _Bool isInternationalSpamFilteringEnabled;
@property(readonly, nonatomic) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property(readonly, nonatomic) NSCache *spiHandleToPersonCache;
@property(readonly, nonatomic) NSCache *handleToContactIdentifierCache;
@property(readonly, nonatomic) id <IMFileTransferCenter> fileTransferCenterDataSource;
@property(readonly, nonatomic) id <IMAssistantFileManager> fileManagerDataSource;
@property(readonly, nonatomic) id <IMLocationManager> locationManagerDataSource;
@property(readonly, nonatomic) id <IMAssistantCoreTelephonySubscriptionsDataSource> coreTelephonySubscriptionsDataSource;
@property(readonly, nonatomic) id <IMAssistantAccountDataSource> accountDataSource;
@property(readonly, nonatomic) id <IMAssistantChatDataSource> chatDataSource;
@property(readonly, nonatomic) id <IMAssistantContactsDataSource> contactsDataSource;
- (_Bool)screentimeAllowedToShowConversationWithHandleIDs:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)screentimeAllowedToShowChat:(IMChat *)arg1 error:(id *)arg2;
@end

