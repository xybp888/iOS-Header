//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface UIWebGeolocationPolicyDecider : NSObject
{
    NSMutableDictionary *_sites;
    NSMutableArray *_challenges;
    NSMapTable *_activeChallenges;
}

+ (id)sharedPolicyDecider;
+ (void)initialize;
- (void)didDenyGeolocationForPromptInfo:(id)arg1;
- (void)didAuthorizeGeolocationForPromptInfo:(id)arg1;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (_Bool)_getAuthorizationStatusForToken:(id)arg1 requestingURL:(id)arg2 promptInfo:(id *)arg3;
- (_Bool)getAuthorizationStatusForOrigin:(id)arg1 requestingURL:(id)arg2 promptInfo:(id *)arg3;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4;
- (void)_executeNextChallenge;
- (void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3;
- (long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2;
- (void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2;
- (_Bool)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3;
- (void)clearAllCaches;
- (void)clearSafariCache;
- (void)clearCache;
- (void)_save;
- (void)_load;
- (id)_siteFile;
- (id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

