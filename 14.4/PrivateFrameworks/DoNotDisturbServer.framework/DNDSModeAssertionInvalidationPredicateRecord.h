//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface DNDSModeAssertionInvalidationPredicateRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_predicateType;
    NSNumber *_date;
    NSArray *_clientIdentifiers;
    NSArray *_UUIDs;
}

+ (id)recordForInvalidationPredicate:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *UUIDs; // @synthesize UUIDs=_UUIDs;
@property(retain, nonatomic) NSArray *clientIdentifiers; // @synthesize clientIdentifiers=_clientIdentifiers;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *predicateType; // @synthesize predicateType=_predicateType;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

