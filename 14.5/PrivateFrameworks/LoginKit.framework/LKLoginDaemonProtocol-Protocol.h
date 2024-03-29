//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoginKit/LKLoginControllerProtocol-Protocol.h>
#import <LoginKit/LKLoginPerformanceTestProtocol-Protocol.h>

@class NSString;

@protocol LKLoginDaemonProtocol <LKLoginControllerProtocol, LKLoginPerformanceTestProtocol>
- (void)updateGlobalDefaultsValue:(id)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)checkInWithCurrentEnvironment:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)isReadyToLogoutWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)isReadyToLoginWithCompletionHandler:(void (^)(NSError *))arg1;
@end

