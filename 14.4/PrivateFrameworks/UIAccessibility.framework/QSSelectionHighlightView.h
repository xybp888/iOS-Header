//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView
{
    _Bool _sentenceHighlight;
    NSArray *_highlightSelectionRects;
    UIColor *_selectionColor;
    UIColor *_underlineColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sentenceHighlight; // @synthesize sentenceHighlight=_sentenceHighlight;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(retain, nonatomic) NSArray *highlightSelectionRects; // @synthesize highlightSelectionRects=_highlightSelectionRects;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

