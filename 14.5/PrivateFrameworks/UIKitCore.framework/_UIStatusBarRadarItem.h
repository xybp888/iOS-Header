//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarRadarView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarRadarItem : _UIStatusBarIndicatorItem
{
    _UIStatusBarRadarView *_radarItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatusBarRadarView *radarItemView; // @synthesize radarItemView=_radarItemView;
- (id)viewForIdentifier:(id)arg1;
- (id)imageView;
- (void)_create_radarItemView;
- (id)imageForUpdate:(id)arg1;
- (id)indicatorEntryKey;

@end

