//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSFaviconProvider.h>

@class NSCache;

@interface _SFFaviconProvider : WBSFaviconProvider
{
    NSCache *_monogramTitleToImageCache;
}

- (void).cxx_destruct;
- (id)fallbackIconForRequest:(id)arg1;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(_Bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(CDUnknownBlockType)arg7;

@end

