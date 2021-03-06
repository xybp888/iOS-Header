//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSUUID, SPHandle;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _accepted;
    NSUUID *_identifier;
    SPHandle *_handle;
    NSDate *_expiration;
    NSDate *_shareDate;
    unsigned long long _sharePrimaryIndex;
    NSString *_correlationIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *correlationIdentifier; // @synthesize correlationIdentifier=_correlationIdentifier;
@property(readonly, nonatomic) unsigned long long sharePrimaryIndex; // @synthesize sharePrimaryIndex=_sharePrimaryIndex;
@property(readonly, copy, nonatomic) NSDate *shareDate; // @synthesize shareDate=_shareDate;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) _Bool accepted; // @synthesize accepted=_accepted;
@property(copy, nonatomic) SPHandle *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(_Bool)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5 shareDate:(id)arg6 sharePrimaryIndex:(unsigned long long)arg7;

@end

