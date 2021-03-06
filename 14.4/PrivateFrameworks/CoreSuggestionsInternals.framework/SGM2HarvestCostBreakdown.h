//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2HarvestCostBreakdown : PBCodable <NSCopying>
{
    NSString *_componentName;
    int _documentSource;
    _Bool _significantWork;
    struct {
        unsigned int documentSource:1;
        unsigned int significantWork:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool significantWork; // @synthesize significantWork=_significantWork;
@property(retain, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSignificantWork;
@property(readonly, nonatomic) _Bool hasComponentName;
- (int)StringAsDocumentSource:(id)arg1;
- (id)documentSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasDocumentSource;
@property(nonatomic) int documentSource; // @synthesize documentSource=_documentSource;

@end

