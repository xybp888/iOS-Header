//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface PXCornerMaskCacheEntry : NSObject
{
    UIImage *_image;
    CDStruct_2bd92d94 _cornerRadius;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) CDStruct_2bd92d94 cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)description;
- (id)initWithCornerRadius:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2 image:(id)arg3;

@end

