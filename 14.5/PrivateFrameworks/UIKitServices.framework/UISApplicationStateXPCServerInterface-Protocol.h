//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitServices/NSObject-Protocol.h>

@class NSNumber, NSObject;

@protocol UISApplicationStateXPCServerInterface <NSObject>
- (oneway void)setNextWakeIntervalSinceReferenceDate:(NSNumber *)arg1;
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)setMinimumBackgroundFetchInterval:(NSNumber *)arg1;
- (oneway void)setUsesBackgroundNetwork:(NSNumber *)arg1;
- (void)usesBackgroundNetworkWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)setBadgeValue:(NSObject *)arg1;
- (void)badgeValueWithCompletion:(void (^)(NSObject *, NSError *))arg1;
@end

