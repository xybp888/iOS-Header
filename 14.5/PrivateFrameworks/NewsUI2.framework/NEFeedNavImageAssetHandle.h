//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIImage;

@interface NEFeedNavImageAssetHandle : NSObject
{
    MISSING_TYPE *filePath;
    MISSING_TYPE *fallbackImage;
    MISSING_TYPE *uniqueKey;
    MISSING_TYPE *feedNavImageSize;
    MISSING_TYPE *tag;
    MISSING_TYPE *feedNavImageStyler;
}

- (void).cxx_destruct;
- (id)init;
- (void)downloadWithGroup:(id)arg1;
- (id)initWithTag:(id)arg1 feedNavImageSize:(struct CGSize)arg2 feedNavImageStyler:(id)arg3;
- (id)initWithIdentifier:(id)arg1 feedNavImage:(id)arg2 feedNavImageSize:(struct CGSize)arg3 feedNavImageStyler:(id)arg4;
@property(nonatomic, readonly) NSString *uniqueKey;
@property(nonatomic, retain) UIImage *fallbackImage; // @synthesize fallbackImage;
@property(nonatomic, copy) NSString *filePath;

@end

