//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isEnabled;
    long long _primaryEarbudSide;
    long long _primaryInEarStatus;
    long long _secondaryInEarStatus;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long secondaryInEarStatus; // @synthesize secondaryInEarStatus=_secondaryInEarStatus;
@property(readonly, nonatomic) long long primaryInEarStatus; // @synthesize primaryInEarStatus=_primaryInEarStatus;
@property(readonly, nonatomic) long long primaryEarbudSide; // @synthesize primaryEarbudSide=_primaryEarbudSide;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithIsEnabled:(_Bool)arg1 primaryEarbudSide:(long long)arg2 primaryInEarStatus:(long long)arg3 secondaryInEarStatus:(long long)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

