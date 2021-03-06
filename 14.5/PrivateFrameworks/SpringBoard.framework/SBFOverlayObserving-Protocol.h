//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SBFOverlayControlling;

@protocol SBFOverlayObserving
- (void)overlayController:(id <SBFOverlayControlling>)arg1 visibilityDidChange:(_Bool)arg2;
- (void)overlayController:(id <SBFOverlayControlling>)arg1 didChangePresentationProgress:(double)arg2 newPresentationProgress:(double)arg3 fromLeading:(_Bool)arg4;
- (void)overlayControllerDidBeginChangingPresentationProgress:(id <SBFOverlayControlling>)arg1;
@end

