//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/NSObject-Protocol.h>

@class HMIVideoAssetWriter, NSData, NSError;

@protocol HMIVideoAssetWriterDelegate <NSObject>
- (void)assetWriter:(HMIVideoAssetWriter *)arg1 didFailWithError:(NSError *)arg2;
- (void)assetWriter:(HMIVideoAssetWriter *)arg1 didOutputSeparableSegment:(NSData *)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)assetWriter:(HMIVideoAssetWriter *)arg1 didOutputInitializationSegment:(NSData *)arg2;
@end

