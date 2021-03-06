//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>

#import <HomeUI/HFLocationManagerObserver-Protocol.h>

@class HFItem, HFTransformItem, NSString;

@interface HUTriggerLocationConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule <HFLocationManagerObserver>
{
    HFItem *_anyLocationOptionItem;
    HFTransformItem *_anyUserAtHomeOptionItem;
    HFTransformItem *_currentUserAtHomeOptionItem;
    HFTransformItem *_noUserAtHomeOptionItem;
    HFTransformItem *_currentUserNotAtHomeOptionItem;
    HFTransformItem *_customOptionItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFTransformItem *customOptionItem; // @synthesize customOptionItem=_customOptionItem;
@property(retain, nonatomic) HFTransformItem *currentUserNotAtHomeOptionItem; // @synthesize currentUserNotAtHomeOptionItem=_currentUserNotAtHomeOptionItem;
@property(retain, nonatomic) HFTransformItem *noUserAtHomeOptionItem; // @synthesize noUserAtHomeOptionItem=_noUserAtHomeOptionItem;
@property(retain, nonatomic) HFTransformItem *currentUserAtHomeOptionItem; // @synthesize currentUserAtHomeOptionItem=_currentUserAtHomeOptionItem;
@property(retain, nonatomic) HFTransformItem *anyUserAtHomeOptionItem; // @synthesize anyUserAtHomeOptionItem=_anyUserAtHomeOptionItem;
@property(retain, nonatomic) HFItem *anyLocationOptionItem; // @synthesize anyLocationOptionItem=_anyLocationOptionItem;
- (id)_createConditionItemForPresenceEventType:(unsigned long long)arg1 userType:(unsigned long long)arg2;
- (id)_conditionItemForPresenceEvent:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)buildConditionOptionItems;
- (_Bool)conditionIsDisabled;
- (id)noConditionSummaryTitle;
- (id)conditionTitle;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)conditionForOptionItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

