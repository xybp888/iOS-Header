//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKProfileService-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@protocol GKProfileServicePrivate <GKProfileService>
- (oneway void)setProfilePrivacy:(int)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(void (^)(void))arg1;
- (oneway void)getFriendSupportPageURLWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getTermsAndConditionsURLWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getSuggestionsForNickname:(NSString *)arg1 suggestionsCount:(long long)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)setPlayerNickname:(NSString *)arg1 suggestionsCount:(long long)arg2 handler:(void (^)(NSArray *, long long, NSError *))arg3;
- (oneway void)setFindable:(_Bool)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)deletePhotoWithHandler:(void (^)(NSError *))arg1;
- (oneway void)setPhotoData:(NSData *)arg1 avatarType:(NSNumber *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)cachePhotos:(NSDictionary *)arg1 avatarType:(NSNumber *)arg2 fileNames:(NSDictionary *)arg3 handler:(void (^)(void))arg4;
- (oneway void)setStatus:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
@end

