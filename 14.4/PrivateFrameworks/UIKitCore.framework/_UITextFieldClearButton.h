//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIButton.h>

@protocol _UITextFieldClearButtonImageProviding;

__attribute__((visibility("hidden")))
@interface _UITextFieldClearButton : UIButton
{
    _Bool _hasCustomImage;
    id <_UITextFieldClearButtonImageProviding> _imageProvider;
}

+ (_Bool)_cursorInteractionEnabled;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCustomImage; // @synthesize hasCustomImage=_hasCustomImage;
@property(nonatomic) __weak id <_UITextFieldClearButtonImageProviding> imageProvider; // @synthesize imageProvider=_imageProvider;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (_Bool)_shouldDefaultToTemplatesForImageViewBackground:(_Bool)arg1;
- (_Bool)_isModernButton;

@end

