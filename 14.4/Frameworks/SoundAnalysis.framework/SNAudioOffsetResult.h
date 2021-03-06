//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProviding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProvidingWritable-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSString;

@interface SNAudioOffsetResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNTimeRangeProviding, SNConfidenceProviding>
{
    double _confidence;
    double _offset;
    CDStruct_e83c9415 _timeRange;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAudioOffsetResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

