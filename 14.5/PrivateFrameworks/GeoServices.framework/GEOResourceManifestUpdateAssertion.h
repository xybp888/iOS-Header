//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface GEOResourceManifestUpdateAssertion : NSObject
{
    NSString *_reason;
    double _creationTimestamp;
    NSObject<OS_xpc_object> *_connection;
    int _notifyToken;
}

- (void).cxx_destruct;
- (void)_connectToGeod;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithReason:(id)arg1;
- (id)init;

@end

