//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VoiceShortcuts/NSCopying-Protocol.h>

@class NSData, NSString;

@interface VCPBChange : PBCodable <NSCopying>
{
    int _changeType;
    NSData *_message;
    int _messageType;
    NSString *_uniqueID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;
- (id)messageTypeAsString:(int)arg1;

@end

