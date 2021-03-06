//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXModeEntityProtocol-Protocol.h>

@class ATXModeEntityScore, NSString;

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol>
{
    _Bool _isOutgoingInteraction;
    _Bool _isIncomingInteraction;
    ATXModeEntityScore *scoreMetadata;
    NSString *_displayName;
    NSString *_rawIdentifier;
    NSString *_cnContactId;
    NSString *_bundleId;
}

+ (_Bool)supportsSecureCoding;
+ (id)vipContactEmailAddresses;
+ (id)cnContactIdsOfFavoriteContacts;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) _Bool isIncomingInteraction; // @synthesize isIncomingInteraction=_isIncomingInteraction;
@property(nonatomic) _Bool isOutgoingInteraction; // @synthesize isOutgoingInteraction=_isOutgoingInteraction;
@property(retain, nonatomic) NSString *cnContactId; // @synthesize cnContactId=_cnContactId;
@property(retain, nonatomic) NSString *rawIdentifier; // @synthesize rawIdentifier=_rawIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) ATXModeEntityScore *scoreMetadata; // @synthesize scoreMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isVIPContactGivenVIPs:(id)arg1;
- (_Bool)isFavoriteContactGivenCNContactIdsOfFavorites:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)identifier;
- (id)initWithDisplayName:(id)arg1 rawIdentifier:(id)arg2 cnContactId:(id)arg3 isOutgoingInteraction:(_Bool)arg4 isIncomingInteraction:(_Bool)arg5 bundleId:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

