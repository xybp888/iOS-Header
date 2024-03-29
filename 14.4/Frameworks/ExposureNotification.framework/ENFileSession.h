//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENXPCServiceClient, NSArray, NSData, NSDate, NSDictionary;

@interface ENFileSession : NSObject
{
    _Bool _activateCalled;
    _Bool _activateSucceeded;
    _Bool _invalidated;
    unsigned int _flags;
    unsigned long long _batchSize;
    unsigned long long _invalidKeyCount;
    NSDictionary *_metadata;
    NSData *_sha256Data;
    NSArray *_signatures;
    ENXPCServiceClient *_serviceClient;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ENXPCServiceClient *serviceClient; // @synthesize serviceClient=_serviceClient;
@property(readonly, copy, nonatomic) NSArray *signatures; // @synthesize signatures=_signatures;
@property(readonly, copy, nonatomic) NSData *sha256Data; // @synthesize sha256Data=_sha256Data;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long invalidKeyCount; // @synthesize invalidKeyCount=_invalidKeyCount;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
- (id)verifySignatureWithPublicKey:(struct __SecKey *)arg1 error:(id *)arg2;
- (id)_readTEKBatchHandleReply:(id)arg1 error:(id *)arg2;
- (id)readTEKBatchAndReturnError:(id *)arg1;
- (_Bool)_activateHandleReply:(id)arg1 error:(id *)arg2;
- (_Bool)_activateSyncWithRequest:(id)arg1 error:(id *)arg2;
- (id)_activateCreateXPCRequestWithFD:(int)arg1 archive:(_Bool)arg2 signatureData:(id)arg3 error:(id *)arg4;
- (id)_activateCreateXPCRequestWithPath:(id)arg1 archive:(_Bool)arg2 signatureData:(id)arg3 error:(id *)arg4;
- (_Bool)activateWithFilePath:(id)arg1 error:(id *)arg2;
- (_Bool)activateWithFD:(int)arg1 signatureData:(id)arg2 error:(id *)arg3;
- (_Bool)activateWithArchivePath:(id)arg1 error:(id *)arg2;
- (void)invalidate;
@property(readonly, copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSDate *startDate;
- (void)dealloc;
- (id)initWithServiceClient:(id)arg1;

@end

