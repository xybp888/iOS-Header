//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NAFuture, NSHashTable, NSString, NSURL;

@interface HFHomeAppInstallStateArbiter : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSHashTable *_observers;
    NAFuture *_homeAppInstalledFuture;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NAFuture *homeAppInstalledFuture; // @synthesize homeAppInstalledFuture=_homeAppInstalledFuture;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *homeAppBundleURL;
- (_Bool)_fastPath_isHomeAppInstalled;
- (void)_applications:(id)arg1 didInstall:(_Bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

