//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PLPhotoEditRenderer, PUAdjustmentsDataSource;

@protocol PUAdjustmentsDataSourceDelegate <NSObject>
- (void)autoEnhanceActionStateChanged;
- (void)adjustmentsDataChanged:(PUAdjustmentsDataSource *)arg1;

@optional
- (PLPhotoEditRenderer *)adjustmentsRenderer:(PUAdjustmentsDataSource *)arg1;
@end

