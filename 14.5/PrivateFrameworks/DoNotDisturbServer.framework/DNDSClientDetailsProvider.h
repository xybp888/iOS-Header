//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DNDSClientDetailsProvider : NSObject
{
    NSMutableDictionary *_detailsByIdentifier;
}

+ (id)_defaultModuleDirectories;
- (void).cxx_destruct;
- (void)_loadPreloadBundles;
- (id)clientDetailsForIdentifier:(id)arg1 applicationBundleURL:(id)arg2;
- (id)clientDetailsForIdentifier:(id)arg1;
- (id)findClientDetailsForIdentifier:(id)arg1;
- (id)init;

@end

