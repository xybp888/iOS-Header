//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HUQuickControlAuxiliaryView;

@interface HUQuickControlAuxiliaryHostView : UIView
{
    UIView<HUQuickControlAuxiliaryView> *_auxiliaryView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;

@end

