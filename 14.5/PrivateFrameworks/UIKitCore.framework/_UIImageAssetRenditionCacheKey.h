//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageAssetRenditionCacheKey : NSObject
{
    UIColor *resolvedTintColor;
    NSString *appearanceName;
    struct CGSize _size;
    unsigned int _drawMode;
    struct {
        unsigned int bold:1;
        unsigned int letterpress:1;
    } _flags;
}

+ (id)keyWithSize:(struct CGSize)arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(_Bool)arg4 letterpress:(_Bool)arg5 drawMode:(unsigned int)arg6;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

