//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXTransaction;

@protocol CXCallControllerHostProtocol <NSObject>
- (oneway void)requestTransaction:(CXTransaction *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)requestCalls:(void (^)(NSArray *))arg1;
@end

