//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary, NSString;

@interface AFDeviceContextMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_backingStore;
    NSString *_type;
    NSDate *_deliveryDate;
    NSDate *_expirationDate;
    NSArray *_redactedKeyPaths;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *redactedKeyPaths; // @synthesize redactedKeyPaths=_redactedKeyPaths;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *deliveryDate; // @synthesize deliveryDate=_deliveryDate;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isExpiredByDate:(id)arg1;
- (id)backingStore;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithType:(id)arg1 deliveryDate:(id)arg2 expirationDate:(id)arg3 redactedKeyPaths:(id)arg4;

@end

