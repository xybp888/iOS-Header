//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDictionary;

@protocol AFSettingsDelegate <NSObject>

@optional
- (void)_settingsConnectionServerVerificationReport:(NSDictionary *)arg1;
- (void)_settingsConnectionPartialVerificationResult:(NSDictionary *)arg1;
- (void)_settingsConnectionDidDisconnect;
@end

