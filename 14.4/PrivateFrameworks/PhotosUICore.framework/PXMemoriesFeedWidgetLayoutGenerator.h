//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesFeedWidgetLayoutMetrics;

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator
{
    struct _LayoutContext _context;
}

- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (id)geometryKinds;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (id)initWithMetrics:(id)arg1;

// Remaining properties
@property(copy, nonatomic) PXMemoriesFeedWidgetLayoutMetrics *metrics; // @dynamic metrics;

@end

