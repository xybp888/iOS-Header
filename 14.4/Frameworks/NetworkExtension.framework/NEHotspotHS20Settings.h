//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _roamingEnabled;
    NSString *_domainName;
    NSArray *_roamingConsortiumOIs;
    NSArray *_naiRealmNames;
    NSArray *_MCCAndMNCs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *MCCAndMNCs; // @synthesize MCCAndMNCs=_MCCAndMNCs;
@property(copy) NSArray *naiRealmNames; // @synthesize naiRealmNames=_naiRealmNames;
@property(copy) NSArray *roamingConsortiumOIs; // @synthesize roamingConsortiumOIs=_roamingConsortiumOIs;
@property(getter=isRoamingEnabled) _Bool roamingEnabled; // @synthesize roamingEnabled=_roamingEnabled;
@property(readonly) NSString *domainName; // @synthesize domainName=_domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDomainName:(id)arg1 roamingEnabled:(_Bool)arg2;
- (id)description;

@end

