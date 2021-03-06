//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRecord.h>

@class CKServerChangeToken, NSData, NSDate, NSOrderedSet, NSString;

@interface WFCloudKitSyncToken : WFRecord
{
    NSString *_identifier;
    NSString *_account;
    NSDate *_date;
    NSData *_serverChangeTokenData;
    NSData *_lastOrderingData;
    NSData *_lastOrderingCloudKitRecordMetadata;
    NSData *_syncEngineMetadata;
    NSData *_syncFlagsCloudKitRecordMetadata;
}

+ (id)accountForContainerEnvironmentString:(id)arg1 userRecordID:(id)arg2;
+ (id)ignoredPropertyNames;
+ (id)defaultPropertyValues;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *syncFlagsCloudKitRecordMetadata; // @synthesize syncFlagsCloudKitRecordMetadata=_syncFlagsCloudKitRecordMetadata;
@property(copy, nonatomic) NSData *syncEngineMetadata; // @synthesize syncEngineMetadata=_syncEngineMetadata;
@property(copy, nonatomic) NSData *lastOrderingCloudKitRecordMetadata; // @synthesize lastOrderingCloudKitRecordMetadata=_lastOrderingCloudKitRecordMetadata;
@property(copy, nonatomic) NSData *lastOrderingData; // @synthesize lastOrderingData=_lastOrderingData;
@property(copy, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)newTokenWithCopiedPayload;
@property(copy, nonatomic) NSOrderedSet *lastOrdering;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken;

@end

