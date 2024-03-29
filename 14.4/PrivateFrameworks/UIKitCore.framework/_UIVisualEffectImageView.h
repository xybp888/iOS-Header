//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

#import <UIKitCore/_UIVisualEffectViewParticipatingInternal-Protocol.h>

@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectViewParticipatingInternal>
{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    NSArray *_viewEffects;
    NSArray *_filters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property(nonatomic) _Bool disableGroupFiltering;
@property(nonatomic) __weak id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

