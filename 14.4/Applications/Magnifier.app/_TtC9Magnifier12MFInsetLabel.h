//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9Magnifier12MFInsetLabel : UILabel
{
    MISSING_TYPE *topInset;
    MISSING_TYPE *leftInset;
    MISSING_TYPE *bottomInset;
    MISSING_TYPE *rightInset;
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;

@end

