//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <ActionKit/WFBooleanSettingIntent-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WFSetBluetoothIntent : INIntent <WFBooleanSettingIntent>
{
}

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) Class settingsClientClass;

// Remaining properties
@property(nonatomic) long long operation; // @dynamic operation;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;

@end

