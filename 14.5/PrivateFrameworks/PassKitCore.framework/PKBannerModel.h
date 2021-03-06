//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKBannerModel : NSObject <NSSecureCoding>
{
    NSString *_passUniqueIdentifier;
    long long _transactionType;
    NSString *_bannerModelUniqueID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bannerModelUniqueID; // @synthesize bannerModelUniqueID=_bannerModelUniqueID;
@property(readonly, nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(readonly, copy, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPassUniqueIdenitifer:(id)arg1 transactionType:(long long)arg2;

@end

