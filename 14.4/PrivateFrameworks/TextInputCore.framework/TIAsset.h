//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, TIAssetAttributes;

@interface TIAsset : NSObject
{
    long long _numberOfAssertions;
    TIAssetAttributes *_attributes;
    NSURL *_url;
    long long _contentVersion;
    long long _compatibilityVersion;
    NSArray *_contents;
    unsigned long long _sizeInBytes;
}

+ (_Bool)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1;
+ (long long)supportedCompatibilityVersion;
+ (id)knownAssetTypes;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly, nonatomic) long long contentVersion; // @synthesize contentVersion=_contentVersion;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) TIAssetAttributes *attributes; // @synthesize attributes=_attributes;
- (_Bool)hasAssertions;
- (void)removeAssertion;
- (void)addAssertion;
@property(readonly, nonatomic) _Bool isCompatible;
- (id)laterAsset:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (id)recursiveDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAttributes:(id)arg1 url:(id)arg2 contentVersion:(long long)arg3 compatibilityVersion:(long long)arg4 sizeInBytes:(unsigned long long)arg5 contents:(id)arg6;
- (id)initWithASAsset:(id)arg1;

@end

