//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMOneTimeCodeUtilities, NSArray, NSTimer;
@protocol IMDaemonListenerProtocol;

@interface IMDOneTimeCodeManager : NSObject
{
    NSArray *_validCodes;
    NSTimer *_codeInvalidationTimer;
    id <IMDaemonListenerProtocol> _broadcaster;
    id <IMDaemonListenerProtocol> _broadcasterOverride;
    IMOneTimeCodeUtilities *_otcUtilities;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMOneTimeCodeUtilities *otcUtilities; // @synthesize otcUtilities=_otcUtilities;
@property(retain, nonatomic) id <IMDaemonListenerProtocol> broadcasterOverride; // @synthesize broadcasterOverride=_broadcasterOverride;
@property(retain, nonatomic) id <IMDaemonListenerProtocol> broadcaster; // @synthesize broadcaster=_broadcaster;
@property(retain, nonatomic) NSTimer *codeInvalidationTimer; // @synthesize codeInvalidationTimer=_codeInvalidationTimer;
@property(retain, nonatomic) NSArray *validCodes; // @synthesize validCodes=_validCodes;
- (void)_setNewCodeAndPrepareInvalidationTimer:(id)arg1;
- (void)consumeCodeWithGuid:(id)arg1;
- (void)broadcastCodeStatusToClients;
- (void)startTrackingCode:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBroadcaster:(id)arg1 otcUtilities:(id)arg2;

@end

