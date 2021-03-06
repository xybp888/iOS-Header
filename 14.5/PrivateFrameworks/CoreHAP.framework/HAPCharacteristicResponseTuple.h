//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSDate, NSError, NSNumber;

@interface HAPCharacteristicResponseTuple : HMFObject
{
    HAPCharacteristic *_characteristic;
    id _value;
    NSNumber *_stateNumber;
    NSDate *_valueUpdatedTime;
    NSError *_error;
}

+ (id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;

@end

