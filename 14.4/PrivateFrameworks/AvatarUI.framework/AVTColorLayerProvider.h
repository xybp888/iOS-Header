//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTColorLayerProvider : NSObject
{
}

- (void)renderColorGradientForModelColor:(id)arg1 skinColor:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)renderColorForColorPreset:(id)arg1 skinColor:(id)arg2 intoLayer:(id)arg3;
- (CDUnknownBlockType)providerForGradientFromColor;
- (CDUnknownBlockType)providerForColorIntoLayer;

@end

