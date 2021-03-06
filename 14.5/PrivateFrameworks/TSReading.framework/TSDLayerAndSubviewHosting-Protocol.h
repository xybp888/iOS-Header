//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class CALayer, NSArray, TSDCanvasSubviewsController, UIView, UIViewController;

@protocol TSDLayerAndSubviewHosting <NSObject>
@property(readonly, retain, nonatomic) TSDCanvasSubviewsController *subviewsController;
@property(readonly, retain, nonatomic) UIViewController *containerViewController;
@property(readonly, retain, nonatomic) UIView *containerView;
@property(readonly, retain, nonatomic) CALayer *containerLayer;
@property(readonly, retain, nonatomic) CALayer *topLevelTilingLayer;
- (NSArray *)topLevelReps;
@end

