//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSDeviceOfferBagContract-Protocol.h>
#import <AppleMediaServices/AMSLookupBagContract-Protocol.h>
#import <AppleMediaServices/AMSMescalBagContract-Protocol.h>
#import <AppleMediaServices/AMSMetricsBagContract-Protocol.h>

@class AMSBagValue, NSString;
@protocol AMSBagProtocol, AMSMescalBagContract, AMSMetricsBagContract;

__attribute__((visibility("hidden")))
@interface AMSDeprecatedBagContract : NSObject <AMSDeviceOfferBagContract, AMSMetricsBagContract, AMSMescalBagContract, AMSLookupBagContract>
{
    id <AMSBagProtocol> _bag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property(readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property(readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property(readonly, nonatomic) AMSBagValue *mescalCertificateURL;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *metricsUrl;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;
@property(readonly, nonatomic) AMSBagValue *unpersonalizedLookupURL;
@property(readonly, nonatomic) AMSBagValue *personalizedLookupURL;
@property(readonly, nonatomic) AMSBagValue *iCloudDeviceOfferDeepLink;
@property(readonly, nonatomic) AMSBagValue *appleMusicDeviceOfferDeepLink;
- (id)initWithBag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@property(readonly) Class superclass;

@end

