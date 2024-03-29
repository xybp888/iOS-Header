//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/NSObject-Protocol.h>

@class FCUserInfo, NSString;

@protocol FCUserInfoObserving <NSObject>

@optional
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didRemoveAccessTokenForTagID:(NSString *)arg2 userInitiated:(_Bool)arg3;
- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfoDidChangeEditorialArticleVersion:(FCUserInfo *)arg1;
- (void)userInfoDidChangeDateLastViewedSaved:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
- (void)userInfoDidChangeAdsUserID:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
- (void)userInfoDidChangeNotificationsUserID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeOnboardingStatus:(FCUserInfo *)arg1;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1 fromCloud:(_Bool)arg2;
@end

