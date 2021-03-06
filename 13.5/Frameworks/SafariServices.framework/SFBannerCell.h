//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFBannerCell : UICollectionViewCell
{
    UIButton *_dismissButton;
    UILabel *_messageLabel;
    NSArray *_minimalLayoutConstraints;
    NSArray *_prominentLayoutConstraints;
    UILabel *_titleLabel;
    CDUnknownBlockType _dismissHandler;
    long long _bannerStyle;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) long long bannerStyle; // @synthesize bannerStyle=_bannerStyle;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) NSString *message;
@property(retain, nonatomic) NSString *title;
- (void)setModel:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

