//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayloadConfirmation-Protocol.h>

@class NSString, _INPBSelectionItem;

@interface _INPBPayloadConfirmation : PBCodable <_INPBPayloadConfirmation, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int startCallIntentContactsConfirmationReason:1;
        unsigned int reason:1;
        unsigned int addTasksIntentTargetTaskListConfirmationReason:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _startCallIntentContactsConfirmationReason;
    int _reason;
    int _addTasksIntentTargetTaskListConfirmationReason;
    _INPBSelectionItem *_confirmationItem;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int addTasksIntentTargetTaskListConfirmationReason; // @synthesize addTasksIntentTargetTaskListConfirmationReason=_addTasksIntentTargetTaskListConfirmationReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) int startCallIntentContactsConfirmationReason; // @synthesize startCallIntentContactsConfirmationReason=_startCallIntentContactsConfirmationReason;
@property(retain, nonatomic) _INPBSelectionItem *confirmationItem; // @synthesize confirmationItem=_confirmationItem;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(id)arg1;
- (id)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasAddTasksIntentTargetTaskListConfirmationReason;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) _Bool hasReason;
- (int)StringAsStartCallIntentContactsConfirmationReason:(id)arg1;
- (id)startCallIntentContactsConfirmationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasStartCallIntentContactsConfirmationReason;
@property(readonly, nonatomic) _Bool hasConfirmationItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

