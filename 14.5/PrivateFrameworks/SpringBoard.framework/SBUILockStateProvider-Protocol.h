//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBCoverSheetPresentationManager, SBLockScreenUnlockRequest;

@protocol SBUILockStateProvider <NSObject>
- (void)coverSheetPresentationManager:(SBCoverSheetPresentationManager *)arg1 unlockWithRequest:(SBLockScreenUnlockRequest *)arg2 completion:(void (^)(_Bool))arg3;
- (_Bool)isUILocked;
@end

