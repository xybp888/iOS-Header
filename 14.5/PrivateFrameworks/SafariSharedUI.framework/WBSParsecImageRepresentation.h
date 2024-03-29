//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSNumber, NSObject, NSString, UIImage;
@protocol OS_dispatch_group;

@interface WBSParsecImageRepresentation : WBSParsecModel
{
    NSString *_dataString;
    NSString *_identifier;
    NSString *_imageURLString;
    UIImage *_image;
    _Bool _template;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSNumber *_baselineOffset;
    NSNumber *_roundCornerRadius;
}

+ (id)_bagImageDataCache;
+ (id)schema;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *roundCornerRadius; // @synthesize roundCornerRadius=_roundCornerRadius;
@property(readonly, nonatomic) NSNumber *baselineOffset; // @synthesize baselineOffset=_baselineOffset;
- (_Bool)test_isTemplate;
- (id)test_imageURLString;
- (id)test_identifier;
- (id)test_data;
- (id)_imageWithData:(id)arg1;
- (id)_templateImageWithImage:(id)arg1;
- (void)_fetchImageDataUsingBlock:(CDUnknownBlockType)arg1;
- (void)_fetchImageData;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)imageWithScaleFactor:(double)arg1;
- (id)imageWithSession:(id)arg1;
- (id)initWithJSONObject:(id)arg1;

@end

