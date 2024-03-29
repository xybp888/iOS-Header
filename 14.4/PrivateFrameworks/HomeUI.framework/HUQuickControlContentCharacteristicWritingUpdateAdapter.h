//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUQuickControlContentCharacteristicWritingDelegate-Protocol.h>

@class HFItemManager, NSString, _HUQuickControlContentCharacteristicWriteQueuedUpdate;
@protocol HUQuickControlContentCharacteristicWritingDelegate;

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject <HUQuickControlContentCharacteristicWritingDelegate>
{
    _Bool _shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
    id <HUQuickControlContentCharacteristicWritingDelegate> _forwardingCharacteristicWritingDelegate;
    HFItemManager *_itemManager;
    _HUQuickControlContentCharacteristicWriteQueuedUpdate *_queuedUpdate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _HUQuickControlContentCharacteristicWriteQueuedUpdate *queuedUpdate; // @synthesize queuedUpdate=_queuedUpdate;
@property(readonly, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) _Bool shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges; // @synthesize shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges=_shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> forwardingCharacteristicWritingDelegate; // @synthesize forwardingCharacteristicWritingDelegate=_forwardingCharacteristicWritingDelegate;
- (id)_characteristicUpdateSuppressionReasonForContent:(id)arg1;
- (void)quickControlContent:(id)arg1 didEndPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContent:(id)arg1 willBeginPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)arg1;
- (void)_executeQueuedUpdate;
- (void)dealloc;
- (id)initWithItemManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

