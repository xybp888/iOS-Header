//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accessToken;
    struct os_unfair_lock_s _accessTokenLock;
    NSUUID *_identifier;
    NSDate *_expiration;
    NSArray *_scope;
    NSString *_requestedScopeString;
}

+ (id)scopeFromScopeString:(id)arg1;
+ (id)_scopeStringFromScope:(id)arg1;
+ (id)expirationFromTimeInterval:(double)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *requestedScopeString; // @synthesize requestedScopeString=_requestedScopeString;
@property(readonly, copy, nonatomic) NSArray *scope; // @synthesize scope=_scope;
@property(readonly, copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;
@property(readonly, copy, nonatomic) NSString *scopeString;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_commonInitWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4;
- (unsigned long long)hash;
- (_Bool)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)_refreshTokenIdentifier;
- (id)_accessTokenIdentifier;
- (_Bool)deleteTokensWithError:(id *)arg1;
- (_Bool)storeRefreshToken:(id)arg1 error:(id *)arg2;
- (id)fetchRefreshTokenWithError:(id *)arg1;
- (_Bool)storeAccessToken:(id)arg1 error:(id *)arg2;
- (id)fetchAccessTokenWithError:(id *)arg1;
- (id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scopeString:(id)arg4;
- (id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4;
- (id)init;

@end

