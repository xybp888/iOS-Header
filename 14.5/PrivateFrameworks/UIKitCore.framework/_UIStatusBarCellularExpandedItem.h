//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarBadgeView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularExpandedItem : _UIStatusBarCellularItem
{
    _UIStatusBarBadgeView *_badgeView;
}

+ (id)badgeDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatusBarBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_badgeView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;

@end

