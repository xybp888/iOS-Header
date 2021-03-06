//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter
{
    NSNumberFormatter *_numberFormatterWith3SigFigs;
    NSNumberFormatter *_numberFormatterWith4SigFigs;
}

+ (id)multiplierForOrder:(long long)arg1;
+ (id)stringForTimeInterval:(double)arg1;
+ (id)sharedFormatter;
+ (id)numberFormatterWithSignificantDigits:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)stringForTimeInterval:(double)arg1;
- (id)stringForObjectValue:(id)arg1;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatterWith4SigFigs; // @synthesize numberFormatterWith4SigFigs=_numberFormatterWith4SigFigs;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatterWith3SigFigs; // @synthesize numberFormatterWith3SigFigs=_numberFormatterWith3SigFigs;

@end

