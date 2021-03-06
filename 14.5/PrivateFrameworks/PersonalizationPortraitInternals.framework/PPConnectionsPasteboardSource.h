//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@class NSCache, NSLocale, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource>
{
    unsigned long long _pasteboardNotificationState;
    NSCache *_cache;
    id _pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)supportedSemanticTags;
- (id)validUTTypes;
- (id)addressPasteboardTextItemFromNotification:(_Bool)arg1;
- (id)fetchedPasteboardItem;
- (void)refreshMostRecentPasteboardItemFromNotification:(_Bool)arg1 explanationSet:(id)arg2;
- (void)_setMostRecentPasteboardItem:(id)arg1;
- (id)_mostRecentPasteboardItem;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (id)cacheValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)identifier;
- (void)setTestLocale:(id)arg1;
- (void)unsetPasteboardTextForTestingAndClearCache;
- (void)setPasteboardTextForTesting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

