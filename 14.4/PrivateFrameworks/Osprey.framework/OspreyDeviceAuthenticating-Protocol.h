//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Osprey/NSObject-Protocol.h>

@class NSData;

@protocol OspreyDeviceAuthenticating <NSObject>
- (void)signData:(NSData *)arg1 success:(void (^)(NSData *, NSDate *))arg2 failure:(void (^)(NSError *))arg3;
- (unsigned long long)authenticationStrategyVersion;
@end

