//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/NSCopying-Protocol.h>
#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface UASharedPasteboardItemInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_types;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSDictionary *types; // @synthesize types=_types;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

