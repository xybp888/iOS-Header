//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDStroke.h>

@interface TSDStroke (TSTAdditions)
+ (id)portalStroke;
+ (id)mergeRangeEmptyStroke;
+ (id)zeroWidthEmptyStroke;
+ (id)emptyStrokeWithWidth:(double)arg1;
- (_Bool)isPortalStroke;
- (_Bool)isEqualToStroke:(id)arg1;
@property(readonly, nonatomic) _Bool solid;
@property(readonly, nonatomic) _Bool empty;
@property(readonly, nonatomic) _Bool dontClearBackground;
@end

