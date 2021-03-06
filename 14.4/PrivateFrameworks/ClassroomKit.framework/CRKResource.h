//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface CRKResource : NSObject <NSSecureCoding>
{
    _Bool _zippedBundle;
    NSURL *_hostedURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isZippedBundle) _Bool zippedBundle; // @synthesize zippedBundle=_zippedBundle;
@property(retain, nonatomic) NSURL *hostedURL; // @synthesize hostedURL=_hostedURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)description;
- (_Bool)isEqualToHostedResource:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHostedURL:(id)arg1 isZippedBundle:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;

@end

