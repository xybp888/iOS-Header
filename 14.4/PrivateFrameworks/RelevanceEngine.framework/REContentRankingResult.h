//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REContentRankingResult : NSObject
{
    _Bool _valid;
    int _unknownCount;
    double _positivePolarity;
    double _negativePolarity;
    double _unbiasedPositivePolarity;
    double _unbiasedNegativePolarity;
}

@property(nonatomic) double unbiasedNegativePolarity; // @synthesize unbiasedNegativePolarity=_unbiasedNegativePolarity;
@property(nonatomic) double unbiasedPositivePolarity; // @synthesize unbiasedPositivePolarity=_unbiasedPositivePolarity;
@property(nonatomic) int unknownCount; // @synthesize unknownCount=_unknownCount;
@property(nonatomic) double negativePolarity; // @synthesize negativePolarity=_negativePolarity;
@property(nonatomic) double positivePolarity; // @synthesize positivePolarity=_positivePolarity;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;

@end

