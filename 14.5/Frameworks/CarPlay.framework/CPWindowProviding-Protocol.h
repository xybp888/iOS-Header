//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPWindow, UITraitCollection;

@protocol CPWindowProviding <NSObject>
@property(readonly, nonatomic) UITraitCollection *carTraitCollection;
@property(readonly, nonatomic) CPWindow *carWindow;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (long long)activationState;
@end

