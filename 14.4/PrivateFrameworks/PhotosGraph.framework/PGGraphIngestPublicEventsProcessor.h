//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor>
{
    NSDictionary *_publicEventCriteriaByCategory;
    NSSet *_largeFrequentLocationNodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *largeFrequentLocationNodes; // @synthesize largeFrequentLocationNodes=_largeFrequentLocationNodes;
@property(readonly, nonatomic) NSDictionary *publicEventCriteriaByCategory; // @synthesize publicEventCriteriaByCategory=_publicEventCriteriaByCategory;
- (id)publicEventCriteriaByCategoryInGraph:(id)arg1;
- (id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg1 graph:(id)arg2;
- (void)_collectConsolidatedAddressesForMomentNodes:(id)arg1 inGraph:(id)arg2 consolidatedAddresses:(id *)arg3 consolidatedAddressesByMomentIdentifier:(id *)arg4 momentNodesForConsolidatedAddresses:(id *)arg5;
- (id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3 graph:(id)arg4;
- (void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

