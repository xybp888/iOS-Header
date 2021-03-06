//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MTVisualStylingProvider, UIColor, UIView;

@interface WFMaterialStylableTableViewCell : UITableViewCell
{
    UIColor *_overridingBackgroundColor;
    MTVisualStylingProvider *_fillProvider;
    UIView *_highlightedBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedBackgroundView; // @synthesize highlightedBackgroundView=_highlightedBackgroundView;
@property(retain, nonatomic) MTVisualStylingProvider *fillProvider; // @synthesize fillProvider=_fillProvider;
@property(retain, nonatomic) UIColor *overridingBackgroundColor; // @synthesize overridingBackgroundColor=_overridingBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

