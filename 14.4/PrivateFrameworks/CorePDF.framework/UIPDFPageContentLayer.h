//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <CorePDF/UIPDFSelectionLayer-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIPDFPageContentLayer : CALayer <UIPDFSelectionLayer>
{
    CALayer *_selectionLayer;
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
- (void)dealloc;
- (id)init;

@end

