//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying>
{
    NSData *_dataRepresentation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDataRepresentation:(id)arg1;

@end

