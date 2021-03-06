//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject
{
    NSDictionary *_synonymLookupTable;
    NSDictionary *_hkUnitNameLookupTable;
}

+ (id)sharedConverter;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *hkUnitNameLookupTable; // @synthesize hkUnitNameLookupTable=_hkUnitNameLookupTable;
@property(copy, nonatomic) NSDictionary *synonymLookupTable; // @synthesize synonymLookupTable=_synonymLookupTable;
- (id)hkUnitNameForUCUMUnitCode:(id)arg1;
- (id)synonymForUCUMUnitString:(id)arg1;
- (id)init;

@end

