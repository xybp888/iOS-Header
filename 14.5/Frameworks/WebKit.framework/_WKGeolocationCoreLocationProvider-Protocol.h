//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@protocol _WKGeolocationCoreLocationListener;

@protocol _WKGeolocationCoreLocationProvider <NSObject>
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)requestGeolocationAuthorization;
- (void)setListener:(id <_WKGeolocationCoreLocationListener>)arg1;
@end

