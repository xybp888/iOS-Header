//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSData, NSMutableDictionary, NSNumber;

@interface EdgeSelection : NSObject <NSSecureCoding>
{
    NSData *_networkSignature;
    NSNumber *_interfaceType;
    long long _trialCount;
    double _alpha;
    long long _windowSize;
    NSMutableDictionary *_edgeAttributesDict;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *edgeAttributesDict; // @synthesize edgeAttributesDict=_edgeAttributesDict;
@property(nonatomic) long long windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) long long trialCount; // @synthesize trialCount=_trialCount;
@property(retain, nonatomic) NSNumber *interfaceType; // @synthesize interfaceType=_interfaceType;
@property(retain, nonatomic) NSData *networkSignature; // @synthesize networkSignature=_networkSignature;
- (double)_stochasticRewardFromRTT:(double)arg1;
- (void)getAttributesForEdge:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getMinimumLatencyEdge:(CDUnknownBlockType)arg1;
- (void)trainEdgeSelectionModel:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkSignature:(id)arg1 interfaceType:(id)arg2 modelParams:(id)arg3;
- (id)description;

@end

