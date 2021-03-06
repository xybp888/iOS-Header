//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLTrainingStore.h>

@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore : PMLTrainingStore
{
    PMLTrainingStoredSessionBatch *_cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3;
- (void).cxx_destruct;
- (void)_registerUnlockHandler;
- (void)_openDbIfUnlocked;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(CDUnknownBlockType)arg7;
- (id)initWithSessionBatch:(id)arg1;

@end

