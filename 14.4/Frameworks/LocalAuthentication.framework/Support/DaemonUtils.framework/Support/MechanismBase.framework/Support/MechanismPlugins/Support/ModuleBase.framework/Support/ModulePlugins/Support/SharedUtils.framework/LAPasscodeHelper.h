//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface LAPasscodeHelper : NSObject
{
    NSMutableDictionary *_failedAttemptsDictionary;
    NSMutableDictionary *_backoffEndTimeDictionary;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)passcodeScreenStyleWithPolicy:(long long)arg1 options:(id)arg2 darkInterface:(_Bool)arg3;
- (long long)createStash:(id)arg1 mode:(int)arg2 manifest:(id)arg3;
- (double)backoffTimeIntervalForUserID:(id)arg1;
- (_Bool)accountBlockedForUserID:(id)arg1;
- (long long)failedAttemptsForUserID:(id)arg1;
- (long long)maxUnlockAttemptsForUserID:(id)arg1;
- (id)_passwordPolicyStatusForUserID:(id)arg1;
- (id)_currentUserID;
- (long long)verifyPasswordUsingPAM:(id)arg1 userID:(id)arg2 pamService:(id)arg3 pamUser:(id)arg4 pamToken:(id)arg5;
- (long long)verifyPasswordUsingAKS:(id)arg1 acmContext:(id)arg2 userId:(id)arg3 policy:(long long)arg4 options:(id)arg5;
- (void)_resetFailedAttemptCountForUserID:(id)arg1;
- (void)_increaseFailedAttemptCountForUserID:(id)arg1;
- (_Bool)isPasscodeSetWithError:(id *)arg1;
- (id)init;

@end

