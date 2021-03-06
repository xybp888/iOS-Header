//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASCAdamID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_stringValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)invalidAdamID;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) long long int64value;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInt64:(long long)arg1;
- (id)initWithNumberValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;

@end

