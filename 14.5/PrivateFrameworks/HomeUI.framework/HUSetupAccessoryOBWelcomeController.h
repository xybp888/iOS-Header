//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class HFItem, HUHomeAccessoryTileView;
@protocol HFServiceLikeItem;

@interface HUSetupAccessoryOBWelcomeController : HUCenterFillOBWelcomeController
{
    HUHomeAccessoryTileView *_homeAccessoryTileView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HUHomeAccessoryTileView *homeAccessoryTileView; // @synthesize homeAccessoryTileView=_homeAccessoryTileView;
- (double)_contentAspectRatio;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 item:(id)arg4;

@end

