//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (VCError)
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;
+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2 reason:(id)arg3;
- (_Bool)vc_isFileAlreadyExists;
- (_Bool)vc_isFileNotFound;
@end

