//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MKActivityObserving-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIHoverGestureRecognizer, UIImage, UIImageView, UIView;
@protocol UGCPhotoCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface UGCPhotoCollectionViewCell : UICollectionViewCell <MKActivityObserving>
{
    UIButton *_closeButton;
    UIView *_closeButtonBlurView;
    UIActivityIndicatorView *_spinner;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    _Bool _hoverActive;
    NSString *_identifier;
    id <UGCPhotoCollectionViewCellDelegate> _delegate;
    UIImageView *_contentImageView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool hoverActive; // @synthesize hoverActive=_hoverActive;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) __weak id <UGCPhotoCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (void)beginAnimatingActivityIndicator;
- (void)prepareForReuse;
- (void)_cancelButtonPressed;
@property(retain, nonatomic) UIImage *image;
- (void)_handleHover:(id)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

