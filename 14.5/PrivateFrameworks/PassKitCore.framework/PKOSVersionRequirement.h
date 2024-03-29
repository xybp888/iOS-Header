//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_iphone;
    NSString *_ipad;
    NSString *_ipod;
    NSString *_appletv;
    NSString *_mac;
    NSString *_watch;
    NSString *_specifiediphone;
}

+ (_Bool)supportsSecureCoding;
+ (id)fromDeviceVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *specifiediphone; // @synthesize specifiediphone=_specifiediphone;
@property(readonly, nonatomic) NSString *watch; // @synthesize watch=_watch;
@property(readonly, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(readonly, nonatomic) NSString *appletv; // @synthesize appletv=_appletv;
@property(readonly, nonatomic) NSString *ipod; // @synthesize ipod=_ipod;
@property(readonly, nonatomic) NSString *ipad; // @synthesize ipad=_ipad;
@property(readonly, nonatomic) NSString *iphone; // @synthesize iphone=_iphone;
- (_Bool)isEqualToOSVersionRequirement:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)versionForDeviceClass:(id)arg1;
- (long long)compare:(id)arg1 deviceClass:(id)arg2;
- (id)asDictionary;
- (id)initWithDictionary:(id)arg1;

@end

