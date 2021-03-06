//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarBackgroundView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_bottomHairlineView;
    UIView *_topHairlineView;
    _Bool _showsBackdrop;
    _Bool _showsBottomHairline;
    _Bool _showsTopHairline;
    _Bool _usesOpaqueColorForTopHairline;
    NSString *_backdropBarGroupName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesOpaqueColorForTopHairline; // @synthesize usesOpaqueColorForTopHairline=_usesOpaqueColorForTopHairline;
@property(nonatomic) _Bool showsTopHairline; // @synthesize showsTopHairline=_showsTopHairline;
@property(nonatomic) _Bool showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(nonatomic) _Bool showsBackdrop; // @synthesize showsBackdrop=_showsBackdrop;
@property(copy, nonatomic) NSString *backdropBarGroupName; // @synthesize backdropBarGroupName=_backdropBarGroupName;
- (void)_updateTopHairlineColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end

