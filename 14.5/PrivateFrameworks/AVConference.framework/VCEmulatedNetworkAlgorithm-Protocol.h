//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, VCEmulatedPacket;

@protocol VCEmulatedNetworkAlgorithm <NSObject>
@property unsigned int packetCountInNetworkQueue;
@property(readonly, nonatomic) double expectedProcessEndTime;
- (void)updateSettingsAtTime:(double)arg1 impairments:(NSDictionary *)arg2;
- (void)process:(VCEmulatedPacket *)arg1;
@end

