//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStyledInfo.h>

@class NSString;

@interface TSDMediaInfo : TSDStyledInfo
{
    struct CGSize mOriginalSize;
    struct {
        unsigned int isPlaceholder:1;
        unsigned int wasMediaReplaced:1;
    } mFlags;
}

@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=mOriginalSize;
- (struct CGPoint)centerForReplacingWithNewMedia;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
@property(readonly, nonatomic) struct CGSize rawDataSize;
@property(readonly, nonatomic) NSString *mediaFileType;
@property(readonly, nonatomic) NSString *mediaDisplayName;
- (void)setGeometry:(id)arg1;
@property(nonatomic) _Bool wasMediaReplaced;
@property(nonatomic) _Bool isPlaceholder;
@property(nonatomic) unsigned int flags;
@property(readonly, nonatomic) struct CGSize defaultOriginalSize;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;

@end

