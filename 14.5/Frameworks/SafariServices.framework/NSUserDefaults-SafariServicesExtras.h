//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (SafariServicesExtras)
+ (id)_sf_sfAppDefaults;
+ (id)_sf_safariDefaults;
- (_Bool)_sf_passwordManagerIsInDemoMode;
- (void)_sf_setShouldAutomaticallyDownloadReadingListItems:(_Bool)arg1;
- (_Bool)_sf_shouldAutomaticallyDownloadReadingListItems;
- (_Bool)_sf_warnAboutFraudulentWebsites;
- (_Bool)_sf_javaScriptCanOpenWindowsAutomatically;
- (_Bool)_sf_javaScriptEnabled;
- (void)_sf_registerSafariDefaults;
- (id)_sf_dateForKey:(id)arg1;
- (id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2;
@end

