//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class CKUserIdentityLookupInfo, NSUUID;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldGrantWriteAccess;
    NSUUID *_participantClientIdentifier;
    CKUserIdentityLookupInfo *_lookupInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) CKUserIdentityLookupInfo *lookupInfo; // @synthesize lookupInfo=_lookupInfo;
@property _Bool shouldGrantWriteAccess; // @synthesize shouldGrantWriteAccess=_shouldGrantWriteAccess;
@property(readonly, copy) NSUUID *participantClientIdentifier; // @synthesize participantClientIdentifier=_participantClientIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2;

@end

