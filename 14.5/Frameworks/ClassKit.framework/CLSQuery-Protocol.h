//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSChangeNotifiable-Protocol.h>
#import <ClassKit/CLSClientRemoteObject-Protocol.h>

@class NSError;

@protocol CLSQuery <CLSClientRemoteObject, CLSChangeNotifiable>
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(NSError *)arg2;
@end

