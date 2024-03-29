//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/NSObject-Protocol.h>

@class HKElectrocardiogram, NSDateComponents, NSString, UIColor;

@protocol HRElectrocardiogramReportDataSource <NSObject>
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) NSDateComponents *dateOfBirthComponents;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) long long activeAlgorithmVersion;
@property(readonly, nonatomic) HKElectrocardiogram *sample;
@end

