//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@protocol CAMTransientAssetConvertible <NSObject>
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) struct CGSize finalExpectedPixelSize;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) unsigned short sessionIdentifier;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
@end

