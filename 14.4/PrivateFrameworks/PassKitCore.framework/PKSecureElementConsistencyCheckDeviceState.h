//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyCheckDeviceState : NSObject
{
    NSArray *_applets;
    NSArray *_devicePaymentApplications;
    NSDictionary *_credentialsForAID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *credentialsForAID; // @synthesize credentialsForAID=_credentialsForAID;
@property(copy, nonatomic) NSArray *devicePaymentApplications; // @synthesize devicePaymentApplications=_devicePaymentApplications;
@property(copy, nonatomic) NSArray *applets; // @synthesize applets=_applets;

@end

