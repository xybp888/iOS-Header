//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFControlItem, HFControlPanelItem, HFServiceItem, HFValueTransformer, HUControlPanelCell, NSString;
@protocol HUControlPanelRule;

@protocol HUControlPanelConfiguration <NSObject>
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;
- (void)setupControlsForCell:(HUControlPanelCell *)arg1 item:(HFControlPanelItem *)arg2;

@optional
- (NSString *)sectionFooterForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (NSString *)sectionTitleForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (_Bool)shouldShowSectionFooterForItem:(HFControlPanelItem *)arg1;
- (_Bool)shouldShowSectionTitleForItem:(HFControlPanelItem *)arg1;
- (HFValueTransformer *)valueTransformerForControlItem:(HFControlItem *)arg1;
@end

