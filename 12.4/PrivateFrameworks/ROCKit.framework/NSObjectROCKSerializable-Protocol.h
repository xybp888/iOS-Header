//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ROCKit/NSObject-Protocol.h>

@class NSObject, ROCKSessionManager;
@protocol OS_xpc_object;

@protocol NSObjectROCKSerializable <NSObject>
- (NSObject<OS_xpc_object> *)rockEncodeWithSessionManager:(ROCKSessionManager *)arg1 error:(id *)arg2;
@end

