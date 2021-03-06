//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDMetalContext, TSDTexturedRectangle;
@protocol MTLRenderCommandEncoder;

@protocol TSDMetalEffect <NSObject>
@property(nonatomic) double opacity;
@property(nonatomic) TSDTexturedRectangle *texture;

@optional
- (void)renderEffectAtPercent:(double)arg1 withContext:(TSDMetalContext *)arg2;
- (void)renderEffectAtPercent:(double)arg1 atBufferIndex:(unsigned long long)arg2 withEncoder:(id <MTLRenderCommandEncoder>)arg3;
@end

