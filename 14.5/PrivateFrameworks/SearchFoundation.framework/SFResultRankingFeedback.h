//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@class NSArray, SFSearchResult;

@interface SFResultRankingFeedback : SFFeedback <NSCopying>
{
    SFSearchResult *_result;
    NSArray *_hiddenResults;
    NSArray *_duplicateResults;
    unsigned long long _localResultPosition;
    double _personalizationScore;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) unsigned long long localResultPosition; // @synthesize localResultPosition=_localResultPosition;
@property(copy, nonatomic) NSArray *duplicateResults; // @synthesize duplicateResults=_duplicateResults;
@property(copy, nonatomic) NSArray *hiddenResults; // @synthesize hiddenResults=_hiddenResults;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResult:(id)arg1 hiddenResults:(id)arg2 duplicateResults:(id)arg3 localResultPosition:(unsigned long long)arg4;

@end

