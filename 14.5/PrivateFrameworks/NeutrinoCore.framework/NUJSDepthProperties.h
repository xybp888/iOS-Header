//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSDepthPropertiesExport-Protocol.h>

@class NUJSAVCameraCalibrationData, NUJSCGImageMetadata;
@protocol NUAuxiliaryImageProperties;

@interface NUJSDepthProperties : NUJSProxy <NUJSDepthPropertiesExport>
{
}

@property(readonly) NUJSCGImageMetadata *depthMetaData;
@property(readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property(readonly) id <NUAuxiliaryImageProperties> depthProperties;
- (id)initWithDepthProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

