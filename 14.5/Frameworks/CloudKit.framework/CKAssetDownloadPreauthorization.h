//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying>
{
    NSString *_responseUUID;
    NSDictionary *_contentResponseHeaders;
    NSData *_contentResponseBody;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *contentResponseBody; // @synthesize contentResponseBody=_contentResponseBody;
@property(retain, nonatomic) NSDictionary *contentResponseHeaders; // @synthesize contentResponseHeaders=_contentResponseHeaders;
@property(retain, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3;

@end

