//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SensorKit/SRRequestReading-Protocol.h>

@class NSDictionary, NSError;

@protocol SRRequestRecording <SRRequestReading>
@property(readonly, nonatomic) NSError *configurationDecodeError;
@property(retain, nonatomic) NSDictionary *sensorConfiguration;
@end

