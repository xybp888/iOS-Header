//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CXCallDirectoryManagerDefaultHostProtocol <NSObject>
- (oneway void)launchCallDirectorySettingsWithReply:(void (^)(NSError *))arg1;
- (oneway void)setPrioritizedExtensionIdentifiers:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)getExtensionsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)setEnabled:(_Bool)arg1 forExtensionWithIdentifier:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (oneway void)reloadExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

