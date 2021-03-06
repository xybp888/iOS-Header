//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSNotificationCenter, NSString;

@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging>
{
    _Bool _cloudPhotosEnabled;
    CDUnknownBlockType _accountFactory;
    NSNotificationCenter *_notificationCenter;
}

+ (id)logCategory;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) CDUnknownBlockType accountFactory; // @synthesize accountFactory=_accountFactory;
@property(getter=isCloudPhotosEnabled) _Bool cloudPhotosEnabled; // @synthesize cloudPhotosEnabled=_cloudPhotosEnabled;
- (_Bool)fetchCloudPhotosEnabled;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;
- (id)initWithAccountFactory:(CDUnknownBlockType)arg1 notificationCenter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

