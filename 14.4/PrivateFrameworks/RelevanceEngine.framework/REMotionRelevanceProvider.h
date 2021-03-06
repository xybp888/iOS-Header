//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REMotionRelevanceProvider : RERelevanceProvider
{
    unsigned long long _motionTypes;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) unsigned long long motionTypes; // @synthesize motionTypes=_motionTypes;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMotionTypes:(unsigned long long)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;

@end

