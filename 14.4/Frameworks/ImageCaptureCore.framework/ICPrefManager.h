//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICPrefManager : NSObject
{
    NSXPCConnection *_authConnection;
    struct os_unfair_lock_s _authConnectionLock;
    NSMutableArray *_authConnectionSemaphores;
    NSString *_controlAuthStatus;
    NSString *_contentsAuthStatus;
}

+ (id)defaultAuthManager;
@property(retain, nonatomic) NSXPCConnection *authConnection; // @synthesize authConnection=_authConnection;
- (_Bool)getGoodNewsStatus;
- (void)requestControlAuthorizationShouldPrompt:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getControlAuthorizationStatus;
- (void)requestContentsAuthorizationShouldPrompt:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getContentsAuthorizationStatus;
- (_Bool)openRemoteAuthenticationManager;
- (void)invalidateQueries;
- (void)endQuery:(id)arg1;
- (void)startQuery:(id)arg1;
- (id)authManagerConnection;
- (void)dealloc;
- (id)init;
- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(_Bool)arg3;
- (id)remoteAuthManager;

@end

