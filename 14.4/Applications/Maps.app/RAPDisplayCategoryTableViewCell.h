//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPCancellableTableViewCell.h"

@class NSLayoutConstraint, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface RAPDisplayCategoryTableViewCell : RAPCancellableTableViewCell
{
    UIView *_tokenView;
    UILabel *_tokenLabel;
    NSLayoutConstraint *_firstBaselineConstraint;
    NSLayoutConstraint *_lastBaselineConstraint;
    NSString *_categoryText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *categoryText; // @synthesize categoryText=_categoryText;
- (void)_contentSizeDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 itemKind:(long long)arg3;
- (void)_configureTokenView;

@end

