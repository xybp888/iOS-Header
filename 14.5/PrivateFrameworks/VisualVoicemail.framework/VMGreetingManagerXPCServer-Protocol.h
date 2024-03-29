//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSUUID, VMVoicemailGreeting;

@protocol VMGreetingManagerXPCServer <NSObject>
- (void)setGreeting:(VMVoicemailGreeting *)arg1 forAccountUUID:(NSUUID *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)greetingForAccountUUID:(NSUUID *)arg1 reply:(void (^)(VMVoicemailGreeting *, NSError *))arg2;
- (void)maximumGreetingDurationForAccountUUID:(NSUUID *)arg1 reply:(void (^)(double))arg2;
- (void)isGreetingChangeSupportedForAccountUUID:(NSUUID *)arg1 reply:(void (^)(_Bool))arg2;
@end

