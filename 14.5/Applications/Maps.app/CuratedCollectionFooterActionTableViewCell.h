//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CuratedCollectionFooterActionItem, MKPlatterView, UILabel;

__attribute__((visibility("hidden")))
@interface CuratedCollectionFooterActionTableViewCell : UITableViewCell
{
    CuratedCollectionFooterActionItem *_actionItem;
    UILabel *_actionTitleLabel;
    MKPlatterView *_platterView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MKPlatterView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) UILabel *actionTitleLabel; // @synthesize actionTitleLabel=_actionTitleLabel;
@property(retain, nonatomic) CuratedCollectionFooterActionItem *actionItem; // @synthesize actionItem=_actionItem;
- (void)prepareForReuse;
- (void)initializeSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

