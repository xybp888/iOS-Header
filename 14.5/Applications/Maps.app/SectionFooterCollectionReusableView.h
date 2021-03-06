//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MapsThemeButton, NSString;

__attribute__((visibility("hidden")))
@interface SectionFooterCollectionReusableView : UICollectionReusableView
{
    MapsThemeButton *_actionButton;
    NSString *_actionTitle;
    CDUnknownBlockType _actionHandler;
}

+ (double)heightForFooterViewWithTraitCollection:(id)arg1;
+ (id)_maximumContentSizeCategory;
+ (id)_fontWithTraitCollection:(id)arg1;
+ (id)_effectiveTraitCollectionWithTraitCollection:(id)arg1;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) MapsThemeButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)setActionTitle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateFonts;
- (void)_didTapActionButton;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

