//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class UIView, UIViewController;

@protocol CCUIContentModuleContainer <NSObject>
- (UIView *)contentContainerView;
- (void)willDismissViewController:(UIViewController *)arg1;
- (void)willPresentViewController:(UIViewController *)arg1;
- (_Bool)isExpanded;
- (_Bool)definesContentModuleContainer;
@end

