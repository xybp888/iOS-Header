//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (WCError)
+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;
+ (id)wcInternalErrorWithCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)wcErrorFromReceivedCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;
@end

