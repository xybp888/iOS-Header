//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CMCapture/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration
{
    _Bool _depthDataDeliveryEnabled;
    _Bool _filterRenderingEnabled;
    NSArray *_filters;
    float _simulatedAperture;
    float _portraitLightingEffectStrength;
    _Bool _primaryCaptureRectModificationEnabled;
    double _primaryCaptureRectAspectRatio;
    struct CGPoint _primaryCaptureRectCenter;
    long long _primaryCaptureRectUniqueID;
}

@property(nonatomic) long long primaryCaptureRectUniqueID; // @synthesize primaryCaptureRectUniqueID=_primaryCaptureRectUniqueID;
@property(nonatomic) struct CGPoint primaryCaptureRectCenter; // @synthesize primaryCaptureRectCenter=_primaryCaptureRectCenter;
@property(nonatomic) double primaryCaptureRectAspectRatio; // @synthesize primaryCaptureRectAspectRatio=_primaryCaptureRectAspectRatio;
@property(nonatomic) _Bool primaryCaptureRectModificationEnabled; // @synthesize primaryCaptureRectModificationEnabled=_primaryCaptureRectModificationEnabled;
@property(nonatomic) float portraitLightingEffectStrength; // @synthesize portraitLightingEffectStrength=_portraitLightingEffectStrength;
@property(nonatomic) float simulatedAperture; // @synthesize simulatedAperture=_simulatedAperture;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) _Bool filterRenderingEnabled; // @synthesize filterRenderingEnabled=_filterRenderingEnabled;
@property(nonatomic) _Bool depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
- (int)sinkType;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;

@end

