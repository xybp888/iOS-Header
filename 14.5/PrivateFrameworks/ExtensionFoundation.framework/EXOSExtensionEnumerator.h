//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EXOSExtensionEnumerator : NSEnumerator
{
    NSArray *_extensionPaths;
    NSEnumerator *_extensionPathsEnumerator;
}

+ (void)enumerateExtensionsInDirectoryAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly) NSEnumerator *extensionPathsEnumerator; // @synthesize extensionPathsEnumerator=_extensionPathsEnumerator;
@property(readonly) NSArray *extensionPaths; // @synthesize extensionPaths=_extensionPaths;
- (id)nextObject;
- (id)initWithCacheURLs:(id)arg1;

@end

