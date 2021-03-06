//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol FMDExtAccessoryProtocol <NSObject>

@optional
- (void)stopSoundForAccessory:(NSString *)arg1 info:(NSDictionary *)arg2 rampDownDuration:(double)arg3 withCompletion:(void (^)(NSError *))arg4;
- (void)playSoundForAccessory:(NSString *)arg1 info:(NSDictionary *)arg2 duration:(double)arg3 rampUpDuration:(double)arg4 channels:(NSArray *)arg5 withCompletion:(void (^)(NSError *))arg6;
- (void)stopDiscoveryForAccessory:(NSString *)arg1 info:(NSDictionary *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)startDiscoveryForAccessory:(NSString *)arg1 duration:(double)arg2 info:(NSDictionary *)arg3 withCompletion:(void (^)(NSError *))arg4;
- (void)getStyleForAccessory:(NSString *)arg1 info:(NSDictionary *)arg2 withCompletion:(void (^)(NSString *, NSError *))arg3;
- (void)safetyAlertForAccessory:(NSString *)arg1 info:(NSDictionary *)arg2 withCompletion:(void (^)(_Bool, NSString *, NSError *))arg3;
- (void)forceConnectToAccessory:(NSString *)arg1 info:(NSDictionary *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)connectionStatusForAccessory:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchAllAccessoriesInfoWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

