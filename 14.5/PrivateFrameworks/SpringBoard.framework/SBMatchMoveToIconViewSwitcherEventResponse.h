//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout;

@interface SBMatchMoveToIconViewSwitcherEventResponse : SBSwitcherModifierEventResponse
{
    _Bool _active;
    SBAppLayout *_appLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 active:(_Bool)arg2;
- (long long)type;

@end

