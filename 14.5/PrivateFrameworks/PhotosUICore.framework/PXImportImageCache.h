//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PXImportImageCache : NSObject
{
    unsigned short _imageFormat;
    NSMutableDictionary *_caches;
    NSObject<OS_dispatch_queue> *_cacheTableQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)accessImageTableForIdentifier:(id)arg1 withChangeBlock:(CDUnknownBlockType)arg2;
- (id)cacheTableForIdentifier:(id)arg1;
- (void)removeCacheForIdentifiers:(id)arg1;
- (void)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)imageForIdentifer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(_Bool)arg3 foundSize:(unsigned long long *)arg4;
- (id)imageForIdentifer:(id)arg1;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2;
- (void)tearDown;
- (void)configureWithFormat:(unsigned short)arg1;
- (id)init;

@end

