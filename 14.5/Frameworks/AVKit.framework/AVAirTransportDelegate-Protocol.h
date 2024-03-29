//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVAirTransport;
@protocol AVAirTransportReverseTransformationResultProtocol;

@protocol AVAirTransportDelegate <NSObject>
- (void)airTransportInputDidClose:(AVAirTransport *)arg1;
- (void)airTransport:(AVAirTransport *)arg1 didReceiveObject:(id <AVAirTransportReverseTransformationResultProtocol>)arg2;

@optional
- (void)airTransportOutputDidOpen:(AVAirTransport *)arg1;
@end

