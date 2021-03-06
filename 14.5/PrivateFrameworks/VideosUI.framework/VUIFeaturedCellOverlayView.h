//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUIFeaturedCellOverlayLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFeaturedCellOverlayView : UIView
{
    _Bool _usesDefaultOverlayType;
    IKViewElement *_viewElement;
    UIView *_appleTVChannelLogoView;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    VUILabel *_disclaimerLabel;
    NSArray *_buttons;
    VUIFeaturedCellOverlayLayout *_overlayLayout;
}

+ (id)featuredCellOverViewFromElement:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) VUIFeaturedCellOverlayLayout *overlayLayout; // @synthesize overlayLayout=_overlayLayout;
@property(nonatomic) _Bool usesDefaultOverlayType; // @synthesize usesDefaultOverlayType=_usesDefaultOverlayType;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) VUILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *appleTVChannelLogoView; // @synthesize appleTVChannelLogoView=_appleTVChannelLogoView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void)layoutSubviews;

@end

