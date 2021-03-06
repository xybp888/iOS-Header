//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle, _UIRemoteView;

__attribute__((visibility("hidden")))
@interface PGLayerHostView : UIView
{
    _UIRemoteView *_remoteView;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
    double _cornerRadiusScale;
    double _cornerRadius;
    _Bool _ignoreCornerRadiusUpdates;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreCornerRadiusUpdates; // @synthesize ignoreCornerRadiusUpdates=_ignoreCornerRadiusUpdates;
@property(nonatomic) double cornerRadiusScale; // @synthesize cornerRadiusScale=_cornerRadiusScale;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;
- (void)didMoveToWindow;
@property(retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

