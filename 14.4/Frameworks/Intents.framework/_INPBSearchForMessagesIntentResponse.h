//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForMessagesIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForMessagesIntentResponse : PBCodable <_INPBSearchForMessagesIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_messages;
    NSArray *_searchResults;
}

+ (_Bool)supportsSecureCoding;
+ (Class)searchResultsType;
+ (Class)messagesType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long searchResultsCount;
- (void)addSearchResults:(id)arg1;
- (void)clearSearchResults;
- (id)messagesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long messagesCount;
- (void)addMessages:(id)arg1;
- (void)clearMessages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

