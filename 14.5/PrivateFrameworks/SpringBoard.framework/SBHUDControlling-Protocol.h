//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, UIViewController;
@protocol SBHUDViewControlling;

@protocol SBHUDControlling <NSObject>
@property(readonly, nonatomic) _Bool isVisible;
@property(readonly, nonatomic) _Bool isDismissed;
@property(readonly, nonatomic) _Bool isDismissing;
@property(readonly, nonatomic) _Bool isPresenting;
@property(readonly, nonatomic) _Bool isPresented;
@property(readonly, nonatomic, getter=isDismissalScheduled) _Bool dismissalScheduled;
@property(readonly, nonatomic) UIViewController<SBHUDViewControlling> *HUDViewController;
@property(readonly, nonatomic) NSString *identifier;
- (void)rescheduleDismissalTimer;
- (void)scheduleDismissalTimer;
- (void)invalidateDismissalTimer;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)presentWithDismissalInterval:(double)arg1 animated:(_Bool)arg2;
- (void)presentWithDismissalInterval:(double)arg1;
@end

