//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKNotification.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSDictionary;

@interface CKQueryNotification : CKNotification <NSSecureCoding>
{
    long long _queryNotificationReason;
    NSDictionary *_recordFields;
    CKRecordID *_recordID;
    long long _databaseScope;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSDictionary *recordFields; // @synthesize recordFields=_recordFields;
@property(nonatomic) long long queryNotificationReason; // @synthesize queryNotificationReason=_queryNotificationReason;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (_Bool)isPublicDatabase;

@end

