//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _BCUCoverEffectsShadow : NSObject
{
    struct CGImage *_image;
    NSString *_blendMode;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (struct UIEdgeInsets)roundedInsetsWithSize:(struct CGSize)arg1;
- (struct CGRect)contentsCenter;
- (struct CGSize)size;
- (id)initWithImage:(struct CGImage *)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)initWithImage:(struct CGImage *)arg1 insets:(struct UIEdgeInsets)arg2 blendMode:(id)arg3;

@end

