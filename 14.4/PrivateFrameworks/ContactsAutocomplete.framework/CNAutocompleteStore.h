//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteStoreQueryHelper, CNAutocompleteStoreReproStringRecorder, CNAutocompleteUserSession, CNCancelationToken;
@protocol CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteStore : NSObject
{
    double _fetchCoalescingInterval;
    CNAutocompleteStoreQueryHelper *_queryHelper;
    CNCancelationToken *_currentFetchToken;
    CNAutocompleteUserSession *_userSession;
    CNAutocompleteStoreReproStringRecorder *_reproStringRecorder;
    id <CNAutocompleteProbeProvider> _probeProvider;
    id <CNScheduler> _scheduler;
}

+ (double)defaultFetchCoalescingInterval;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property(retain, nonatomic) CNAutocompleteStoreReproStringRecorder *reproStringRecorder; // @synthesize reproStringRecorder=_reproStringRecorder;
@property(retain, nonatomic) CNAutocompleteUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak CNCancelationToken *currentFetchToken; // @synthesize currentFetchToken=_currentFetchToken;
@property(readonly, nonatomic) CNAutocompleteStoreQueryHelper *queryHelper; // @synthesize queryHelper=_queryHelper;
@property(nonatomic) double fetchCoalescingInterval; // @synthesize fetchCoalescingInterval=_fetchCoalescingInterval;
- (void)ignoreResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2;
- (id)executeFetchRequest:(id)arg1;
- (id)executeFetchRequest:(id)arg1 afterDelay:(double)arg2 delegate:(id)arg3;
- (id)scheduleFetchRequest:(id)arg1 delegate:(id)arg2;
- (id)scheduleFetchRequest:(id)arg1;
@property(readonly, nonatomic) id <CNAutocompleteSearchProvider> searchProvider;
- (id)initWithDelegate:(id)arg1 searchProvider:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

