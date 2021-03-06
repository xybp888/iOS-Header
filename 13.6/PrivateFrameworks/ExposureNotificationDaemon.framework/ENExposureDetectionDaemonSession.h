//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENAdvertisementDatabaseQuerySession, ENExposureCalculationSession, ENExposureDatabase, ENExposureDetectionClientSession, NSString;
@protocol OS_dispatch_queue;

@interface ENExposureDetectionDaemonSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _prepared;
    unsigned long long _processedKeyCount;
    unsigned long long _matchedKeyCount;
    ENAdvertisementDatabaseQuerySession *_advertisementDatabaseQuerySession;
    ENExposureDetectionClientSession *_clientSession;
    NSString *_clientSigningIdentity;
    ENExposureCalculationSession *_exposureCalculationSession;
    ENExposureDatabase *_exposureDatabase;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ENExposureDatabase *exposureDatabase; // @synthesize exposureDatabase=_exposureDatabase;
@property(retain, nonatomic) ENExposureCalculationSession *exposureCalculationSession; // @synthesize exposureCalculationSession=_exposureCalculationSession;
@property(copy, nonatomic) NSString *clientSigningIdentity; // @synthesize clientSigningIdentity=_clientSigningIdentity;
@property(retain, nonatomic) ENExposureDetectionClientSession *clientSession; // @synthesize clientSession=_clientSession;
@property(retain, nonatomic) ENAdvertisementDatabaseQuerySession *advertisementDatabaseQuerySession; // @synthesize advertisementDatabaseQuerySession=_advertisementDatabaseQuerySession;
@property(readonly, nonatomic) unsigned long long matchedKeyCount; // @synthesize matchedKeyCount=_matchedKeyCount;
@property(readonly, nonatomic) unsigned long long processedKeyCount; // @synthesize processedKeyCount=_processedKeyCount;
- (id)description;
- (id)getSummaryAndReturnError:(id *)arg1;
- (_Bool)_checkPreparedAndReturnError:(id *)arg1;
- (_Bool)addMatchesWithTemporaryExposureKeyFile:(id)arg1 error:(id *)arg2;
- (_Bool)_addCachedMatchesAndReturnError:(id *)arg1;
- (void)invalidate;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (id)initWithQueue:(id)arg1;

@end

