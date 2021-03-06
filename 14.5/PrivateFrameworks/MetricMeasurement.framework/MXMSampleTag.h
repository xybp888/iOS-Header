//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/NSCopying-Protocol.h>
#import <MetricMeasurement/NSSecureCoding-Protocol.h>

@class NSOrderedSet, NSString;

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying>
{
    NSOrderedSet *_taxonomy;
    MXMSampleTag *_parent;
}

+ (_Bool)supportsSecureCoding;
+ (id)ancestery;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MXMSampleTag *parent; // @synthesize parent=_parent;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToTag:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)containsTag:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTaxonomy:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (id)initWithDNString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *domainNameString;

@end

