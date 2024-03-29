//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTEnumerationOptions.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSNumber, RTLocation;

@interface RTStoredHintEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding>
{
    unsigned long long _batchSize;
    _Bool _ascending;
    RTLocation *_referenceLocation;
    NSNumber *_sourceFilter;
    NSDateInterval *_dateInterval;
    unsigned long long _limit;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSNumber *sourceFilter; // @synthesize sourceFilter=_sourceFilter;
@property(readonly, nonatomic) RTLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (Class)enumeratedType;
- (unsigned long long)batchSize;
- (id)initWithReferenceLocation:(id)arg1 sourceFilter:(id)arg2 ascending:(_Bool)arg3 dateInterval:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6;
- (id)initWithReferenceLocation:(id)arg1 ascending:(_Bool)arg2 dateInterval:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)init;

@end

