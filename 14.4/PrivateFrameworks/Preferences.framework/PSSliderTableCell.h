//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSControlTableCell.h>

@class UIView;

@interface PSSliderTableCell : PSControlTableCell
{
    UIView *_disabledView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setValue:(id)arg1;
- (id)controlValue;
- (_Bool)canReload;
- (void)setCellEnabled:(_Bool)arg1;
- (id)titleLabel;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

