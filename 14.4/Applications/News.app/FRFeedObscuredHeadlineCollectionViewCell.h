//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FRContentObscuringView;
@protocol FCHeadlineProviding, FRFeedObscuredHeadlineCollectionViewCellDelegate;

@interface FRFeedObscuredHeadlineCollectionViewCell : UICollectionViewCell
{
    FRContentObscuringView *_obscuringView;
    id <FCHeadlineProviding> _obscuredHeadline;
    id <FRFeedObscuredHeadlineCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FRFeedObscuredHeadlineCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FCHeadlineProviding> obscuredHeadline; // @synthesize obscuredHeadline=_obscuredHeadline;
@property(readonly, nonatomic) FRContentObscuringView *obscuringView; // @synthesize obscuringView=_obscuringView;
- (void)_showButtonPressed:(id)arg1;
- (void)populateWithHeadline:(id)arg1 obscuringMode:(long long)arg2 cellType:(long long)arg3 contentInset:(struct UIEdgeInsets)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

