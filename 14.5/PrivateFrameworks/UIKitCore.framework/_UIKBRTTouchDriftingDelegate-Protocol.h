//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, _UIKBRTTouchDrifting;

@protocol _UIKBRTTouchDriftingDelegate
- (struct CGPoint)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchCenterForFingerID:(unsigned long long)arg2;
- (NSSet *)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2;
- (unsigned long long)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 fingerIDFortouchIdentifier:(id)arg2;
- (void)_uikbrtTouchDriftingStateChanged:(_UIKBRTTouchDrifting *)arg1;
@end

