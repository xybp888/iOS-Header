//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (LTTranslationError)
+ (id)lt_unsupporedLocalePairError:(id)arg1;
+ (id)lt_offlineTTSErrorWithError:(id)arg1;
+ (id)lt_translationTimeout;
+ (id)lt_speechLimitExceeded;
+ (id)lt_speechTranslationOngoing;
+ (id)lt_invalidRequestErrorWithDescription:(id)arg1;
+ (id)lt_speechTranslationOngoingError;
+ (id)lt_lidModelLoadError;
+ (id)lt_incompatibleForcedRoutes;
+ (id)lt_onlineNotImplementedError;
+ (id)lt_errorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;
+ (id)lt_internalErrorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;
@end

