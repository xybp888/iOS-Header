//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMFUI/NSObject-Protocol.h>

@class MKMapView;

@protocol FMFMapOptionsViewControllerDelegate <NSObject>
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)_dismiss:(id)arg1;
- (void)openInMapsButtonTapped:(id)arg1;
- (MKMapView *)mapView;
@end

