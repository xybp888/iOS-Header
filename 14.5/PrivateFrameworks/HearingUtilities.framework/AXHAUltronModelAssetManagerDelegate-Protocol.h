//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUtilities/NSObject-Protocol.h>

@class AXUltronModelAssetManager;

@protocol AXHAUltronModelAssetManagerDelegate <NSObject>
- (void)assetsReadyForUltronManager:(AXUltronModelAssetManager *)arg1;
- (void)assetsNotReadyForUltronManager:(AXUltronModelAssetManager *)arg1;

@optional
- (void)assets:(AXUltronModelAssetManager *)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(_Bool)arg5;
@end

