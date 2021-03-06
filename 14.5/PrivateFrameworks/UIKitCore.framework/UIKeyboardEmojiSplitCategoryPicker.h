//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardEmojiSplit.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit
{
    _Bool _whiteText;
    unsigned long long _currentSelected;
    long long _lastUsedCategory;
}

@property _Bool whiteText; // @synthesize whiteText=_whiteText;
- (void)setRenderConfig:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)symbolForRow:(long long)arg1;
- (id)titleForRow:(long long)arg1 fallback:(_Bool)arg2;
- (void)updateCategorySelectedIndicator:(long long)arg1;
- (void)updateToCategory:(long long)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

