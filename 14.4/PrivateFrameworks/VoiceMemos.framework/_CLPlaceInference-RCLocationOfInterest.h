//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/_CLPlaceInference.h>

#import <VoiceMemos/RCLocationOfInterest-Protocol.h>

@class CLLocation, NSString;

@interface _CLPlaceInference (RCLocationOfInterest) <RCLocationOfInterest>
+ (void)initialize;
@property(readonly, nonatomic) NSString *preferredName;
@property(readonly, nonatomic) CLLocation *location;

// Remaining properties
@property(readonly, nonatomic) double confidence;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

