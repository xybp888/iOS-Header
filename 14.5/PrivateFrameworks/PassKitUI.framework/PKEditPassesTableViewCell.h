//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PKPass;

@interface PKEditPassesTableViewCell : UITableViewCell
{
    _Bool _showImage;
    PKPass *_pass;
}

+ (struct UIEdgeInsets)separatorInset;
+ (_Bool)needsFullPassImage;
+ (double)height;
+ (struct CGSize)imageSizeNeeded;
- (void).cxx_destruct;
@property(nonatomic) _Bool showImage; // @synthesize showImage=_showImage;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setImage:(id)arg1 forPass:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 showImage:(_Bool)arg2;

@end

