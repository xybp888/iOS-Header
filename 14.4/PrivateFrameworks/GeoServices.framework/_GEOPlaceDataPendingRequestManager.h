//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataPendingRequestManager : NSObject
{
    NSMutableDictionary *_requestHandlersPending;
}

- (void).cxx_destruct;
- (void)_failAllPendingRequests;
- (void)failedToResolveIdentifiers:(id)arg1 withError:(id)arg2;
- (void)didResolveItems:(id)arg1 forIdentifiers:(id)arg2;
- (void)_cleanUpFinishedHandlers:(id)arg1;
- (id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (id)identifiersRequested:(id)arg1 forHandler:(CDUnknownBlockType)arg2;
- (void)willUpdateExpiredIdentifiers:(id)arg1;
- (id)init;

@end

