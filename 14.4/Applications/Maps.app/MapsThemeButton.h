//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MapsTheming-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MapsThemeButton : UIButton <MapsTheming>
{
    CDUnknownBlockType _imageProvider;
    CDUnknownBlockType _titleColorProvider;
    CDUnknownBlockType _tintColorProvider;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tintColorProvider; // @synthesize tintColorProvider=_tintColorProvider;
@property(copy, nonatomic) CDUnknownBlockType titleColorProvider; // @synthesize titleColorProvider=_titleColorProvider;
@property(copy, nonatomic) CDUnknownBlockType imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_updateTintColor;
- (void)_updateTitleColor;
- (void)_updateImage;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateTheme;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

