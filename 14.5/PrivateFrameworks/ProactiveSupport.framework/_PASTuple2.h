//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>

@interface _PASTuple2 : NSObject <NSCopying>
{
    NSObject *_first;
    NSObject *_second;
}

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject *second; // @synthesize second=_second;
@property(readonly, nonatomic) NSObject *first; // @synthesize first=_first;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToTuple2:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

