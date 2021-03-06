//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accessibilityIdentifier;
    NSString *_title;
    NSString *_imageName;
    UIImage *_imageIfLoaded;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *imageIfLoaded; // @synthesize imageIfLoaded=_imageIfLoaded;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setAccessibilityIdentifier:(id)arg1;
- (id)accessibilityIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setImage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)_mutableCopy;
- (id)_immutableCopy;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3 deferredElementVisit:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isLoadingPlaceholder;
@property(readonly, nonatomic) _Bool isLeaf;
- (_Bool)_isVisible;
- (_Bool)_canBeHighlighted;
- (_Bool)_isInlineGroup;

@end

