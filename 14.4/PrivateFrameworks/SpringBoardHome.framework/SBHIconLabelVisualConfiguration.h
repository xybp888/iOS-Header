//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHIconLabelVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _fontSize;
    double _baselineOffsetFromImage;
    double _height;
    double _extraWidth;
}

@property(nonatomic) double extraWidth; // @synthesize extraWidth=_extraWidth;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double baselineOffsetFromImage; // @synthesize baselineOffsetFromImage=_baselineOffsetFromImage;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

