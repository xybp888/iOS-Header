//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface HighlightRecognizer : UIGestureRecognizer
{
    unsigned long long _numberOfTouches;
    id _highlightTarget;
    SEL _highlightAction;
}

- (void).cxx_destruct;
@property(nonatomic) SEL highlightAction; // @synthesize highlightAction=_highlightAction;
@property(nonatomic) __weak id highlightTarget; // @synthesize highlightTarget=_highlightTarget;
- (void)reset;
- (unsigned long long)numberOfTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

