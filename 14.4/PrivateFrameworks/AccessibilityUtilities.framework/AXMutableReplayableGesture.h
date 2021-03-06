//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXMutableReplayableGesture : AXReplayableGesture
{
}

- (id)_forcesByFingerIdentifierAtEventIndex:(unsigned long long)arg1;
- (id)_pointsByFingerIdentifierAtEventIndex:(unsigned long long)arg1;
- (void)_removeFingersAtEventIndex:(unsigned long long)arg1;
- (void)_addPoint:(struct CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atEventIndex:(unsigned long long)arg4;
- (void)_addPoint:(struct CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atTime:(double)arg4;
- (void)addPointsFromReplayableGesture:(id)arg1;
- (void)addPointsByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3;

@end

