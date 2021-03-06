//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKHeartRateQueryObserver-Protocol.h>

@class HKQuantitySample;
@protocol NTKHeartRateModelDelegate;

@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver>
{
    id <NTKHeartRateModelDelegate> _delegate;
    HKQuantitySample *_mostRecentHeartRate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKQuantitySample *mostRecentHeartRate; // @synthesize mostRecentHeartRate=_mostRecentHeartRate;
@property(readonly, nonatomic) __weak id <NTKHeartRateModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)manager:(id)arg1 receivedLatestHeartRateSample:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

