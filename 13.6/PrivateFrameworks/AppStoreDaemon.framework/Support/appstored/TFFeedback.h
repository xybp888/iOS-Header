//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface TFFeedback : PBCodable <NSCopying>
{
    NSString *_comment;
    NSString *_email;
    NSString *_incidentId;
    NSMutableArray *_screenshots;
}

+ (Class)screenshotsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSMutableArray *screenshots; // @synthesize screenshots=_screenshots;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIncidentId;
@property(readonly, nonatomic) _Bool hasComment;
- (id)screenshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)screenshotsCount;
- (void)addScreenshots:(id)arg1;
- (void)clearScreenshots;
@property(readonly, nonatomic) _Bool hasEmail;

@end

