//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class CAFilter, UIBlurEffect, UIColor, UIFont, UIImageSymbolConfiguration;

@protocol PXUIBadgeTheme <NSObject>
@property(readonly, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property(readonly, nonatomic) UIColor *backgroundBorderColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) double backgroundAlpha;
@property(readonly, nonatomic) double backgroundBorderWidth;
@property(readonly, nonatomic) double backgroundCornerRadius;
@property(readonly, nonatomic) Class backgroundViewClass;
@property(readonly, nonatomic) CAFilter *labelCompositingFilter;
@property(readonly, nonatomic) UIColor *labelTextColor;
@property(readonly, nonatomic) double labelAlpha;
@property(readonly, nonatomic) UIFont *labelFont;
@property(readonly, nonatomic) CAFilter *imageCompositingFilter;
@property(readonly, nonatomic) UIColor *imageTintColor;
@property(readonly, nonatomic) double imageAlpha;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageConfiguration;
@end

