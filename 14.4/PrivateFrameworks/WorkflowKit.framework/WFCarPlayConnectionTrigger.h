//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@interface WFCarPlayConnectionTrigger : WFTrigger
{
    _Bool _onConnect;
    _Bool _onDisconnect;
}

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (_Bool)isSupportedOnThisDevice;
+ (_Bool)isUserInitiated;
+ (_Bool)isAllowedToRunAutomatically;
@property(nonatomic) _Bool onDisconnect; // @synthesize onDisconnect=_onDisconnect;
@property(nonatomic) _Bool onConnect; // @synthesize onConnect=_onConnect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end

