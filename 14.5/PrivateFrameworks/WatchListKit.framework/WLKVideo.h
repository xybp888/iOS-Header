//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WLKArtworkVariantListing, WLKVideoAsset;

@interface WLKVideo : NSObject
{
    NSString *_ID;
    NSString *_externalID;
    NSString *_title;
    unsigned long long _duration;
    WLKArtworkVariantListing *_images;
    WLKVideoAsset *_asset;
}

+ (id)videosWithDictionaries:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WLKVideoAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) WLKArtworkVariantListing *images; // @synthesize images=_images;
@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)initWithDictionary:(id)arg1;

@end

