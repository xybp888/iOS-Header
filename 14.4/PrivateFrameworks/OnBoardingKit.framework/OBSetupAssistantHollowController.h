//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <OnBoardingKit/OBSetupAssistantSupport-Protocol.h>

@class NSString, OBHollowButton;

@interface OBSetupAssistantHollowController : OBWelcomeController <OBSetupAssistantSupport>
{
    OBHollowButton *_contentButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OBHollowButton *contentButton; // @synthesize contentButton=_contentButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)addHollowButtonWithTitle:(id)arg1 target:(id)arg2 downPressSelector:(SEL)arg3 upLiftSelector:(SEL)arg4;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

