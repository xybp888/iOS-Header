//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol LSInstallationServiceProtocol <NSObject>
- (void)uninstallApplication:(NSString *)arg1 withOptions:(NSDictionary *)arg2 uninstallType:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)installApplication:(NSString *)arg1 atURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3 installType:(unsigned long long)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
@end

