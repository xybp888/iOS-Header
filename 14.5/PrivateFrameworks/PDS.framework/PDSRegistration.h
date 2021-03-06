//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDS/NSSecureCoding-Protocol.h>

@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding>
{
    BOOL _pushEnvironment;
    NSString *_topicString;
    NSString *_qualifierString;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL pushEnvironment; // @synthesize pushEnvironment=_pushEnvironment;
@property(readonly, nonatomic) NSString *qualifierString; // @synthesize qualifierString=_qualifierString;
@property(readonly, nonatomic) NSString *topicString; // @synthesize topicString=_topicString;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToRegistration:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTopic:(id)arg1 qualifier:(id)arg2 pushEnvironment:(BOOL)arg3;

@end

