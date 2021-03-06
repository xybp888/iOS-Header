//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDUbiquitousConversationManager, NSString;
@protocol EDConversationDailyCloudExporterDelegate;

@interface EDConversationDailyiCloudExporter : NSObject <EFLoggable>
{
    id <EDConversationDailyCloudExporterDelegate> _delegate;
    EDUbiquitousConversationManager *_conversationManager;
}

+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) EDUbiquitousConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) id <EDConversationDailyCloudExporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)run;
- (id)initWithDelegate:(id)arg1 conversationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

