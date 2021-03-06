//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAMModeDialItem, UIImageView;

@interface CAMModeIndicatorView : UIControl
{
    long long _selectedMode;
    CAMModeDialItem *__modeTextView;
    UIImageView *__symbolView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *_symbolView; // @synthesize _symbolView=__symbolView;
@property(readonly, nonatomic) CAMModeDialItem *_modeTextView; // @synthesize _modeTextView=__modeTextView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
- (void)_updateModeIndicatorAnimated:(_Bool)arg1;
- (struct CGSize)_symbolSize;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

