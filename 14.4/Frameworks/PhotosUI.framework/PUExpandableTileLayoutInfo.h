//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo
{
    _Bool _isExpanded;
    struct CGSize _expandedSize;
    struct CGSize _unexpandedSize;
}

@property(readonly, nonatomic) struct CGSize unexpandedSize; // @synthesize unexpandedSize=_unexpandedSize;
@property(readonly, nonatomic) struct CGSize expandedSize; // @synthesize expandedSize=_expandedSize;
@property(readonly, nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 isExpanded:(_Bool)arg8 expandedSize:(struct CGSize)arg9 unexpandedSize:(struct CGSize)arg10;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;

@end

