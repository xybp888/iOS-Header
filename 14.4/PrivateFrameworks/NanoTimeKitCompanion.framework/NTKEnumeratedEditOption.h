//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@interface NTKEnumeratedEditOption : NTKValueEditOption
{
}

+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (_Bool)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionsRestrictedByDevice:(id)arg1;
+ (unsigned long long)indexOfOption:(id)arg1 forDevice:(id)arg2;
+ (id)optionAtIndex:(unsigned long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)numberOfOptionsForDevice:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long _value; // @dynamic _value;

@end

