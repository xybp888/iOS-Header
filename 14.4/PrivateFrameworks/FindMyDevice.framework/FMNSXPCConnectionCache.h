//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FMNSXPCConnectionCache : NSObject
{
    NSObject<OS_dispatch_queue> *_modsSerialQueue;
    NSMutableDictionary *_connectionsByServiceName;
}

+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *connectionsByServiceName; // @synthesize connectionsByServiceName=_connectionsByServiceName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modsSerialQueue; // @synthesize modsSerialQueue=_modsSerialQueue;
- (id)resumeConnectionWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

@end

