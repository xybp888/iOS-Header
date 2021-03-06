//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CKSharedAssetCollectionViewCell : UICollectionViewCell
{
    UIView *_previewView;
    UILabel *_previewTitleLabel;
    NSString *_name;
    NSString *_url;
    UIView *_previewTitleContainerView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *previewTitleContainerView; // @synthesize previewTitleContainerView=_previewTitleContainerView;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UILabel *previewTitleLabel; // @synthesize previewTitleLabel=_previewTitleLabel;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void)layoutSubviews;
- (id)formattedTitleFromPreviewTitle:(id)arg1;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

