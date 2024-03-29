//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSMutableDictionary, NSString;

@interface EDUserNotificationMailboxCutoffController : NSObject <EFLoggable>
{
    NSMutableDictionary *_mailboxCutoffs;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mailboxCutoffs; // @synthesize mailboxCutoffs=_mailboxCutoffs;
- (void)_writeToDefaults;
- (void)_readFromDefaults;
- (void)_initializeIfNeeded;
- (_Bool)_updateCutoffForMailbox:(id)arg1 date:(id)arg2;
- (_Bool)_shouldUpdateCutoffForMessage:(id)arg1;
- (void)clearCutoffForMailbox:(id)arg1;
- (void)updateCutoffForMailboxesWithMessages:(id)arg1;
- (_Bool)isMessageAboveMailboxCutoff:(id)arg1;
- (id)cutoffDateForMailbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

