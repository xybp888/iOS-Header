//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class MISSING_TYPE, NSAttributedString, NSString;

@interface _TtC5Files12DOCFastLabel : UILabel
{
    MISSING_TYPE *textLayer;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
@property(nonatomic) double contentScaleFactor;
@property(nonatomic, retain) NSAttributedString *attributedText;
@property(nonatomic, copy) NSString *text;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

