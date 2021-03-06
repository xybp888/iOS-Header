//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUMutableFontDescriptor, NSMutableArray;

@interface MPUFontDescriptorCache : NSObject
{
    MPUMutableFontDescriptor *_reusableMutableFontDescriptor;
    unsigned long long _maximumCapacity;
    NSMutableArray *_orderedCachedFontDescriptors;
}

+ (id)sharedFontDescriptorCache;
- (void).cxx_destruct;
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;
- (id)cachedImmutableFontDescriptorForConfigurationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

