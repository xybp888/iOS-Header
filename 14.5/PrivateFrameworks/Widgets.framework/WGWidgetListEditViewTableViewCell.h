//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView;

@interface WGWidgetListEditViewTableViewCell : UITableViewCell
{
    UIImageView *_dotImageView;
    _Bool _widgetEnabled;
    _Bool _showsDot;
    UIButton *_insertWidgetAccessoryButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIButton *insertWidgetAccessoryButton; // @synthesize insertWidgetAccessoryButton=_insertWidgetAccessoryButton;
@property(nonatomic) _Bool showsDot; // @synthesize showsDot=_showsDot;
@property(nonatomic, getter=isWidgetEnabled) _Bool widgetEnabled; // @synthesize widgetEnabled=_widgetEnabled;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

