//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class HMFActivity, NSDictionary, NSString, NSUUID;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding>
{
    _Bool _shouldEnqueueMirrorOutput;
    _Bool _shouldRollBackIfMirrorOutputFails;
    _Bool _disallowsCellularAccessForMirrorOutput;
    _Bool _requiresModelCreation;
    _Bool _disallowsModelCreation;
    NSString *_label;
    NSDictionary *_messagePayload;
    NSString *_messageName;
    CDUnknownBlockType _messageResponseHandler;
    NSUUID *_messageTransactionIdentifier;
    long long _qualityOfService;
    HMFActivity *_activity;
    unsigned long long _transactionItemsBatchLimit;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithMessage:(id)arg1;
+ (id)optionsWithLabel:(id)arg1;
- (void).cxx_destruct;
@property _Bool disallowsModelCreation; // @synthesize disallowsModelCreation=_disallowsModelCreation;
@property _Bool requiresModelCreation; // @synthesize requiresModelCreation=_requiresModelCreation;
@property(nonatomic) unsigned long long transactionItemsBatchLimit; // @synthesize transactionItemsBatchLimit=_transactionItemsBatchLimit;
@property(retain, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) _Bool disallowsCellularAccessForMirrorOutput; // @synthesize disallowsCellularAccessForMirrorOutput=_disallowsCellularAccessForMirrorOutput;
@property(nonatomic) _Bool shouldRollBackIfMirrorOutputFails; // @synthesize shouldRollBackIfMirrorOutputFails=_shouldRollBackIfMirrorOutputFails;
@property(nonatomic) _Bool shouldEnqueueMirrorOutput; // @synthesize shouldEnqueueMirrorOutput=_shouldEnqueueMirrorOutput;
@property(retain, nonatomic) NSUUID *messageTransactionIdentifier; // @synthesize messageTransactionIdentifier=_messageTransactionIdentifier;
@property(copy, nonatomic) CDUnknownBlockType messageResponseHandler; // @synthesize messageResponseHandler=_messageResponseHandler;
@property(retain, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(retain, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithLabel:(id)arg1;

@end

