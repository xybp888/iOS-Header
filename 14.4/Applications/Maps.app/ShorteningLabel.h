//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ShorteningLabel : UILabel
{
    double _lastUpdateWidth;
    NSArray *_attributedTextAlternatives;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *attributedTextAlternatives; // @synthesize attributedTextAlternatives=_attributedTextAlternatives;
- (void)_updateAttributedText;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;

@end

