//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSProtocolUtilities : NSObject
{
}

+ (void)applyUserDefaultOverridesToResponse:(id)arg1;
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)arg1 personID:(id)arg2 originalLibrarySize:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)_urlSession;
+ (id)appleIDSession;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)arg1;
+ (id)deviceInfoDictForPersonID:(id)arg1;
+ (id)Win32SHA1OfUDID:(id)arg1;

@end

