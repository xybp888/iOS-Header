//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/NSObject-Protocol.h>

@class NSIndexSet, TSCHChartLayout, TSDLayoutGeometry;

@protocol TSCHSupportsRendering <NSObject>
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)requireSeparateLabelLayer;
- (_Bool)renderElementsShadowOnly;
- (_Bool)renderElementsWithoutShadows;
- (_Bool)renderLabels;
- (_Bool)renderReferenceLines;
- (_Bool)renderGrid;
- (_Bool)renderElements;
- (_Bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (NSIndexSet *)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1;
- (NSIndexSet *)renderSeriesIndexSet;
- (_Bool)is2DRepFor3DChartRep;
- (_Bool)isDrawingIntoPDF;
- (_Bool)forceRenderBlankBackground;
- (double)viewScale;
- (TSDLayoutGeometry *)geometry;
- (_Bool)shadowsEnabled;
- (TSCHChartLayout *)chartLayout;
@end

