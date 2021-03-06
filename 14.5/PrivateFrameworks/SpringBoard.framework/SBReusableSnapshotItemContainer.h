//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherItemContainer.h>

#import <SpringBoard/SBFluidSwitcherItemContainerReusable-Protocol.h>

@class NSString;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBFluidSwitcherItemContainerReusable>
{
}

- (id)_snapshotView;
- (void)_updateSnapshotViewWithAppLayout:(id)arg1;
- (void)setAppLayout:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)prepareForReuse;
- (void)conformsToProtocolSBFluidSwitcherItemContainerReusable;
- (id)initWithFrame:(struct CGRect)arg1 appLayout:(id)arg2 delegate:(id)arg3 active:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

