//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class LTSchemaError, LTSchemaTask, NSData, NSString;

@interface LTSchemaBatchTranslationEvent : PBCodable
{
    LTSchemaTask *_task;
    NSString *_sessionID;
    NSString *_requestID;
    NSString *_systemLocale;
    unsigned int _batchSeqNo;
    unsigned int _numberOfParagraphs;
    unsigned int _responseTimeMs;
    unsigned int _numParagraphFailures;
    LTSchemaError *_error;
    struct {
        unsigned int batchSeqNo:1;
        unsigned int numberOfParagraphs:1;
        unsigned int responseTimeMs:1;
        unsigned int numParagraphFailures:1;
    } _has;
    _Bool _hasTask;
    _Bool _hasSessionID;
    _Bool _hasRequestID;
    _Bool _hasSystemLocale;
    _Bool _hasError;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(nonatomic) _Bool hasSystemLocale; // @synthesize hasSystemLocale=_hasSystemLocale;
@property(nonatomic) _Bool hasRequestID; // @synthesize hasRequestID=_hasRequestID;
@property(nonatomic) _Bool hasSessionID; // @synthesize hasSessionID=_hasSessionID;
@property(nonatomic) _Bool hasTask; // @synthesize hasTask=_hasTask;
@property(retain, nonatomic) LTSchemaError *error; // @synthesize error=_error;
@property(nonatomic) unsigned int numParagraphFailures; // @synthesize numParagraphFailures=_numParagraphFailures;
@property(nonatomic) unsigned int responseTimeMs; // @synthesize responseTimeMs=_responseTimeMs;
@property(nonatomic) unsigned int numberOfParagraphs; // @synthesize numberOfParagraphs=_numberOfParagraphs;
@property(nonatomic) unsigned int batchSeqNo; // @synthesize batchSeqNo=_batchSeqNo;
@property(copy, nonatomic) NSString *systemLocale; // @synthesize systemLocale=_systemLocale;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) LTSchemaTask *task; // @synthesize task=_task;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasNumParagraphFailures;
@property(nonatomic) _Bool hasResponseTimeMs;
@property(nonatomic) _Bool hasNumberOfParagraphs;
@property(nonatomic) _Bool hasBatchSeqNo;

@end

