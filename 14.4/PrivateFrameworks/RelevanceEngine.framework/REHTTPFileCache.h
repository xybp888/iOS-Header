//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

@interface REHTTPFileCache : NSObject
{
    NSString *_directory;
    NSCache *_cache;
}

- (void).cxx_destruct;
- (id)loadFileAtPath:(id)arg1;
- (id)initWithRootDirectory:(id)arg1;

@end

