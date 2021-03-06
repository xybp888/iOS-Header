//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImageConfiguration;

@interface PXExtendedImageConfiguration : NSObject
{
    _Bool _isSystemImage;
    NSString *_imageName;
    UIColor *_tintColor;
    UIImageConfiguration *_imageConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageConfiguration *imageConfiguration; // @synthesize imageConfiguration=_imageConfiguration;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) _Bool isSystemImage; // @synthesize isSystemImage=_isSystemImage;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)init;
- (id)initWithImageName:(id)arg1 isSystemImage:(_Bool)arg2 tintColor:(id)arg3 imageConfiguration:(id)arg4;
- (id)initWithImageName:(id)arg1 isSystemImage:(_Bool)arg2;
- (id)initWithImageName:(id)arg1;

@end

