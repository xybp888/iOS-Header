//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SpringBoardAlertProxy;
@protocol OS_xpc_object;

@protocol SpringBoardAlertProxyDelegate <NSObject>

@optional
- (void)alertProxyDidCancel:(SpringBoardAlertProxy *)arg1;
- (void)alertProxy:(SpringBoardAlertProxy *)arg1 didReceiveMessage:(NSObject<OS_xpc_object> *)arg2;
@end

