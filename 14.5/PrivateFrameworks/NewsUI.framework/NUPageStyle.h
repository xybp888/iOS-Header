//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface NUPageStyle : NSObject
{
    _Bool _hideToolbar;
    NSString *_title;
    UIImage *_titleImage;
    NSString *_nextButtonTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideToolbar; // @synthesize hideToolbar=_hideToolbar;
@property(copy, nonatomic) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

