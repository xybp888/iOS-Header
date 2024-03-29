//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICFPLeaseSyncSession : NSObject
{
    unsigned int _mediaKind;
    unsigned long long _accountID;
    id _leaseID;
}

+ (id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned int)arg3 returningLeaseSyncRequestData:(id *)arg4 error:(id *)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int mediaKind; // @synthesize mediaKind=_mediaKind;
@property(readonly, nonatomic) id leaseID; // @synthesize leaseID=_leaseID;
@property(readonly, nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
- (_Bool)processRenewResponseData:(id)arg1 error:(id *)arg2;
- (_Bool)importLeaseSyncResponseData:(id)arg1 error:(id *)arg2;
- (_Bool)getLeaseSyncRenewRequestData:(id *)arg1 error:(id *)arg2;
- (_Bool)endLeaseSyncAndReturnError:(id *)arg1;

@end

