//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIIndexBarDisplayEntry.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIIndexBarDisplayEntry_LegacyIOS : UIIndexBarDisplayEntry
{
    UIImage *_image;
    id _line;
    struct CGPoint _baselinePoint;
    struct CGRect _bounds;
    struct CGRect _typeBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint baselinePoint; // @synthesize baselinePoint=_baselinePoint;
@property(nonatomic) struct CGRect typeBounds; // @synthesize typeBounds=_typeBounds;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) id line; // @synthesize line=_line;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;

@end

