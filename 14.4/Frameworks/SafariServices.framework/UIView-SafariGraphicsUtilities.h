//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (SafariGraphicsUtilities)
+ (void)sf_animate:(_Bool)arg1 usingDefaultTimingWithOptions:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_sf_cancelLinkAnimationsOnWindow:(id)arg1;
+ (void)_sf_performLinkAnimation:(long long)arg1 onView:(id)arg2;
+ (void)_sf_animateLinkImage:(struct CGImage *)arg1 withAnimation:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4 toRect:(struct CGRect)arg5 inView:(id)arg6 afterImageDisappearsBlock:(CDUnknownBlockType)arg7 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg8;
+ (void)_sf_animateLinkImage:(id)arg1 withAnimation:(long long)arg2 fromPoint:(struct CGPoint)arg3 inView:(id)arg4 toRect:(struct CGRect)arg5 inView:(id)arg6 afterImageDisappearsBlock:(CDUnknownBlockType)arg7 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg8;
- (void)ss_setUntransformedFrame:(struct CGRect)arg1;
- (struct CGRect)ss_untransformedFrame;
- (void)_sf_setMatchesIntrinsicContentSize;
- (id)_sf_firstAncestorViewOfClass:(Class)arg1;
- (void)_sf_setOrderedSubviews:(id *)arg1 count:(unsigned long long)arg2;
- (id)_sf_snapshotImageFromIOSurface;
- (double)_sf_convertY:(double)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) struct CGRect _sf_bottomUnsafeAreaFrameForToolbar;
@property(readonly, nonatomic) struct CGRect _sf_bottomUnsafeAreaFrame;
@property(readonly, nonatomic) struct CGRect _sf_safeAreaBounds;
@property(readonly, nonatomic) struct UIEdgeInsets _sf_safeAreaInsetsFlippedForLayoutDirectionality;
@property(readonly, nonatomic) _Bool _sf_hasLandscapeAspectRatio;
@property(readonly, nonatomic) _Bool _sf_usesLeftToRightLayout;
@property(readonly, nonatomic) _Bool _sf_isFullScreenHeight;
@property(readonly, nonatomic) _Bool _sf_isFullScreenWidth;
@end

