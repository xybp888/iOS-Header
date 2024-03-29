//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKSource, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface EKInviteeAlternativeTimeSearcher : NSObject
{
    _Bool _noConflictRequired;
    _Bool _availabilityRequestInProgress;
    _Bool _internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
    _Bool _internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSDate *_internalOriginalStartDate;
    NSDate *_internalOriginalEndDate;
    NSDate *_originalRangeStartDate;
    NSMutableArray *_internalProposedStarts;
    EKSource *_source;
    NSString *_ignoredEventID;
    NSOperationQueue *_availabilityRequestsQueue;
    NSMutableDictionary *_participantAddressesToParticipants;
    NSString *_organizerAddress;
    NSDate *_nextAvailabilityRangeStartDate;
    double _availabilitySearchDurationMultiplier;
    unsigned long long _remainingSearchAttempts;
    NSMutableArray *_leftoverSpans;
    NSMutableArray *_internalTimesWhenAllAttendeesCanAttend;
    NSMutableArray *_internalTimesWhenSomeAttendeesCanAttend;
    NSMutableArray *_internalProposedTimes;
    NSMutableArray *_internalOriginalConflictedParticipants;
    CDUnknownBlockType _stateChanged;
}

+ (void)_validateSpans:(id)arg1;
+ (id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg1;
+ (long long)_invalidBinarySearchIndex;
+ (long long)_binarySearchForIndexOfTimeSpanInArray:(id)arg1 containingDate:(id)arg2;
+ (id)_rankNonOptimalTimeSpans:(id)arg1;
+ (id)_findHighestRankedNonOptimalTimeSpans:(id)arg1;
+ (void)_insertUniqueParticipants:(id)arg1 intoExistingParticipantsArray:(id)arg2;
+ (id)_allButFirstItemInArray:(id)arg1;
+ (id)_allButLastItemInArray:(id)arg1;
+ (_Bool)_span:(id)arg1 hasSameConflictedParticipantsAsSpan:(id)arg2;
+ (id)_addressesForParticipants:(id)arg1;
+ (id)_findLeftoverSpans:(id)arg1 usingFreeTimes:(id)arg2 andNonOptimalTimes:(id)arg3;
+ (id)stateAsString:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType stateChanged; // @synthesize stateChanged=_stateChanged;
@property(nonatomic) _Bool internalSearchingForMoreTimesWhenSomeAttendeesCanAttend; // @synthesize internalSearchingForMoreTimesWhenSomeAttendeesCanAttend=_internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
@property(nonatomic) _Bool internalSearchingForMoreTimesWhenAllAttendeesCanAttend; // @synthesize internalSearchingForMoreTimesWhenAllAttendeesCanAttend=_internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *internalOriginalConflictedParticipants; // @synthesize internalOriginalConflictedParticipants=_internalOriginalConflictedParticipants;
@property(retain, nonatomic) NSMutableArray *internalProposedTimes; // @synthesize internalProposedTimes=_internalProposedTimes;
@property(retain, nonatomic) NSMutableArray *internalTimesWhenSomeAttendeesCanAttend; // @synthesize internalTimesWhenSomeAttendeesCanAttend=_internalTimesWhenSomeAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *internalTimesWhenAllAttendeesCanAttend; // @synthesize internalTimesWhenAllAttendeesCanAttend=_internalTimesWhenAllAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *leftoverSpans; // @synthesize leftoverSpans=_leftoverSpans;
@property(nonatomic) unsigned long long remainingSearchAttempts; // @synthesize remainingSearchAttempts=_remainingSearchAttempts;
@property(nonatomic) double availabilitySearchDurationMultiplier; // @synthesize availabilitySearchDurationMultiplier=_availabilitySearchDurationMultiplier;
@property(retain, nonatomic) NSDate *nextAvailabilityRangeStartDate; // @synthesize nextAvailabilityRangeStartDate=_nextAvailabilityRangeStartDate;
@property(nonatomic) _Bool availabilityRequestInProgress; // @synthesize availabilityRequestInProgress=_availabilityRequestInProgress;
@property(retain, nonatomic) NSString *organizerAddress; // @synthesize organizerAddress=_organizerAddress;
@property(retain, nonatomic) NSMutableDictionary *participantAddressesToParticipants; // @synthesize participantAddressesToParticipants=_participantAddressesToParticipants;
@property(retain, nonatomic) NSOperationQueue *availabilityRequestsQueue; // @synthesize availabilityRequestsQueue=_availabilityRequestsQueue;
@property(retain, nonatomic) NSString *ignoredEventID; // @synthesize ignoredEventID=_ignoredEventID;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *internalProposedStarts; // @synthesize internalProposedStarts=_internalProposedStarts;
@property(retain, nonatomic) NSDate *originalRangeStartDate; // @synthesize originalRangeStartDate=_originalRangeStartDate;
@property(retain, nonatomic) NSDate *internalOriginalEndDate; // @synthesize internalOriginalEndDate=_internalOriginalEndDate;
@property(retain, nonatomic) NSDate *internalOriginalStartDate; // @synthesize internalOriginalStartDate=_internalOriginalStartDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool noConflictRequired; // @synthesize noConflictRequired=_noConflictRequired;
- (id)_generateTimeSpansForResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (id)_filterOutUnreasonableTimeSlots:(id)arg1;
- (id)_generateNonOptimalTimesFromTimeSpans:(id)arg1;
- (id)_generateOpenFreeTimesFromTimeSpans:(id)arg1;
- (id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg1;
- (id)_spliceLeftTimeSpans:(id)arg1 andNewTimeSpans:(id)arg2;
- (void)_haltSearchWithError:(_Bool)arg1;
- (void)_processResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (id)_participantforParticipantAddress:(id)arg1;
- (void)_transitionToConflictFoundStateAndSearch;
- (void)_sendStateChange:(long long)arg1;
- (void)_resetSearchFallbackNumbers;
- (void)_attemptSearch;
- (void)resetWithEvent:(id)arg1 organizerAddressForNewlyScheduledEvent:(id)arg2;
- (void)searchForMoreTimesWhenSomeAttendeesCanAttend;
- (void)searchForMoreTimesWhenAllAttendeesCanAttend;
@property(readonly, nonatomic) _Bool searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property(readonly, nonatomic) _Bool searchingForMoreTimesWhenAllAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *proposedTimes;
@property(readonly, nonatomic) NSArray *timesWhenSomeAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *timesWhenAllAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *originalConflictedParticipants;
@property(readonly, nonatomic) NSDate *originalEndDate;
@property(readonly, nonatomic) NSDate *originalStartDate;
- (void)dealloc;
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;

@end

