//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetBool.h>

#import <SAObjects/SASettingSettingsAction-Protocol.h>

@class NSString;

@interface SASettingSetAirplaneMode : SASettingSetBool <SASettingSettingsAction>
{
}

+ (id)setAirplaneModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAirplaneMode;
- (_Bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

