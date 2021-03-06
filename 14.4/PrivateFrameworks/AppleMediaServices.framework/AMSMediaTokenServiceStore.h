//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMediaToken, AMSMediaTokenServiceKeychainStore, AMSMediaTokenServiceUserDefaultsStore, NSString;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceStore : NSObject
{
    NSString *_clientIdentifier;
    NSString *_keychainAccessGroup;
    AMSMediaToken *_memoryMediaToken;
    AMSMediaTokenServiceKeychainStore *_keychainStore;
    AMSMediaTokenServiceUserDefaultsStore *_userDefaultsStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSMediaTokenServiceUserDefaultsStore *userDefaultsStore; // @synthesize userDefaultsStore=_userDefaultsStore;
@property(retain, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore; // @synthesize keychainStore=_keychainStore;
@property(retain, nonatomic) AMSMediaToken *memoryMediaToken; // @synthesize memoryMediaToken=_memoryMediaToken;
@property(retain, nonatomic) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)_teardownKeychainNotifications;
- (void)_setupKeychainNotifications;
- (void)_postMediaTokenChangedNotification;
- (void)_mediaTokenChanged;
- (id)_mediaTokenChangedNotificationName;
- (id)_keychainAccessGroup;
- (_Bool)_hasAppleGroupEnabled;
- (void)dealloc;
- (void)storeToken:(id)arg1;
- (id)retrieveToken;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2;

@end

