//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface HKFavoritesTableViewCell : UITableViewCell
{
    UIImageView *_star;
    UIImageView *_filledStar;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic, getter=isFavorited) _Bool favorited;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

