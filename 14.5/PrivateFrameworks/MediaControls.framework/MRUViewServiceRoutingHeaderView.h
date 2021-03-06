//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>

@class MRUVisualStylingProvider, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MRUViewServiceRoutingHeaderView : UIView <MRUVisualStylingProviderObserver>
{
    NSString *_title;
    UIImage *_image;
    MRUVisualStylingProvider *_stylingProvider;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

