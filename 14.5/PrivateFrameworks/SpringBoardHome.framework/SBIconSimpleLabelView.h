//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <SpringBoardHome/SBIconLabelView-Protocol.h>

@class SBIconLabelImageParameters, SBIconView, UIImage;

@interface SBIconSimpleLabelView : UIImageView <SBIconLabelView>
{
    SBIconView *_iconView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SBIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) SBIconLabelImageParameters *imageParameters;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *image;

@end

