//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface EditShortcutTypeCell : UITableViewCell
{
    UILabel *_label;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isChecked) _Bool checked;
- (void)_updateFonts;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)initWithShortcut:(id)arg1 shortcutType:(id)arg2;

@end

