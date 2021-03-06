//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>

@class MPVolumeController, MRUButton, MRUVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MRUVolumeStepperView : UIView <MRUVisualStylingProviderObserver>
{
    MPVolumeController *_volumeController;
    MRUVisualStylingProvider *_stylingProvider;
    UIView *_decreaseBackground;
    UIView *_increaseBackground;
    MRUButton *_decreaseButton;
    MRUButton *_increaseButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUButton *increaseButton; // @synthesize increaseButton=_increaseButton;
@property(retain, nonatomic) MRUButton *decreaseButton; // @synthesize decreaseButton=_decreaseButton;
@property(retain, nonatomic) UIView *increaseBackground; // @synthesize increaseBackground=_increaseBackground;
@property(retain, nonatomic) UIView *decreaseBackground; // @synthesize decreaseBackground=_decreaseBackground;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)increaseButtonHoldReleased:(id)arg1;
- (void)increaseButtonHoldBegan:(id)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (void)decreaseButtonHoldReleased:(id)arg1;
- (void)decreaseButtonHoldBegan:(id)arg1;
- (void)decreaseTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

