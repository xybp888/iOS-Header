//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class ALAsset, ALAssetsLibrary, NSCondition, NSURL;

__attribute__((visibility("hidden")))
@interface _UIGetAssetThread : NSThread
{
    NSURL *_url;
    ALAssetsLibrary *_library;
    NSCondition *_condition;
    ALAsset *_asset;
}

- (void).cxx_destruct;
@property(retain) NSCondition *condition; // @synthesize condition=_condition;
@property(retain) ALAsset *asset; // @synthesize asset=_asset;
- (void)main;
- (id)initWithURL:(id)arg1 assetsLibrary:(id)arg2;

@end

