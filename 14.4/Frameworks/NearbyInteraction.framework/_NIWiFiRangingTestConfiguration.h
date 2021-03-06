//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken, NSDictionary;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration
{
    NIDiscoveryToken *_peerDiscoveryToken;
    NSDictionary *_parameters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // @synthesize peerDiscoveryToken=_peerDiscoveryToken;
- (id)descriptionInternal;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2;

@end

