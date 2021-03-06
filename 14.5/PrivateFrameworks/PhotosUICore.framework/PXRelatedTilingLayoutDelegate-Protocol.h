//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PXRelatedTilingLayout;

@protocol PXRelatedTilingLayoutDelegate <NSObject>

@optional
- (struct CGRect)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (NSString *)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
@end

