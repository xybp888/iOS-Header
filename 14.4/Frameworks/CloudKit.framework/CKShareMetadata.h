//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKContainerAssignment-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKDeviceToDeviceShareInvitationToken, CKRecord, CKRecordID, CKRecordZone, CKShare, CKShareParticipant, CKUserIdentity, NSArray, NSData, NSString;

@interface CKShareMetadata : NSObject <CKContainerAssignment, NSCopying, NSSecureCoding>
{
    _Bool _acceptedInProcess;
    CKShare *_share;
    CKRecordID *_rootRecordID;
    long long _participantRole;
    long long _participantStatus;
    long long _participantPermission;
    CKUserIdentity *_ownerIdentity;
    CKRecord *_rootRecord;
    CKShareParticipant *_callingParticipant;
    NSArray *_sharedItemHierarchyIDs;
    NSString *_rootRecordType;
    CKDeviceToDeviceShareInvitationToken *_invitationToken;
    NSData *_protectedFullToken;
    NSData *_publicToken;
    NSData *_privateToken;
    CKRecordZone *_sharedZone;
    CKContainerID *_containerID;
    NSArray *_outOfNetworkMatches;
    NSData *_encryptedData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(retain, nonatomic) NSArray *outOfNetworkMatches; // @synthesize outOfNetworkMatches=_outOfNetworkMatches;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) CKRecordZone *sharedZone; // @synthesize sharedZone=_sharedZone;
@property(copy, nonatomic) NSData *privateToken; // @synthesize privateToken=_privateToken;
@property(copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(copy, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // @synthesize invitationToken=_invitationToken;
@property(retain, nonatomic) NSString *rootRecordType; // @synthesize rootRecordType=_rootRecordType;
@property(copy, nonatomic) NSArray *sharedItemHierarchyIDs; // @synthesize sharedItemHierarchyIDs=_sharedItemHierarchyIDs;
@property(copy, nonatomic) CKShareParticipant *callingParticipant; // @synthesize callingParticipant=_callingParticipant;
@property(copy, nonatomic) CKRecord *rootRecord; // @synthesize rootRecord=_rootRecord;
@property(copy, nonatomic) CKUserIdentity *ownerIdentity; // @synthesize ownerIdentity=_ownerIdentity;
@property(nonatomic) long long participantPermission; // @synthesize participantPermission=_participantPermission;
@property(nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property(nonatomic) long long participantRole; // @synthesize participantRole=_participantRole;
@property(copy, nonatomic) CKRecordID *rootRecordID; // @synthesize rootRecordID=_rootRecordID;
@property(copy, nonatomic) CKShare *share; // @synthesize share=_share;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)environment;
@property(readonly, copy, nonatomic) NSString *containerIdentifier;
@property(readonly, nonatomic) long long participantType;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)ckShortDescription;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
@property(readonly, nonatomic, getter=baseToken) NSString *baseToken;
- (id)init;

@end

