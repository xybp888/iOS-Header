//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarChromeViewController.h"

#import "CarInstrumentClusterConfigurationDelegate-Protocol.h"
#import "CarInstrumentClusterWindowZoomDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CarInstrumentClusterChromeConfiguration, NSString, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CarMapWidgetChromeViewController : CarChromeViewController <UIGestureRecognizerDelegate, CarInstrumentClusterConfigurationDelegate, CarInstrumentClusterWindowZoomDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    CarInstrumentClusterChromeConfiguration *_chromeConfiguration;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_tappedMapWidget:(id)arg1;
- (void)windowWantsToZoomInDirection:(long long)arg1;
- (void)sceneConfigurationDidChange:(id)arg1;
- (void)configureAccessoriesOverlay:(id)arg1 forMode:(id)arg2;
- (_Bool)canShowCards;
- (void)setMapView:(id)arg1;
- (void)didUnsuppress;
- (void)viewDidLoad;
- (id)initWithSceneType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

