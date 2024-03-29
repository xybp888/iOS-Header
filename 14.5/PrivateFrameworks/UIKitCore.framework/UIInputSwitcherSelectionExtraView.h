//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSelectionExtraView : UIView
{
    double m_pointerOffset;
    unsigned long long _roundedCorners;
    UIKeyboardMenuView *_menu;
    struct CGRect _keyRect;
}

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;
@property(nonatomic) double pointerOffset; // @synthesize pointerOffset=m_pointerOffset;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

