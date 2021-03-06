//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary, NSObject, NSPredicate;
@protocol OS_dispatch_queue;

@interface CKLStreamTrafficObserver : CKLStreamObserver
{
    NSPredicate *_logMessageFilter;
    CDUnknownBlockType _requestParsedBlock;
    NSMutableDictionary *_requestDictionary;
    NSObject<OS_dispatch_queue> *_printQueue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *printQueue; // @synthesize printQueue=_printQueue;
@property(retain) NSMutableDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(copy, nonatomic) CDUnknownBlockType requestParsedBlock; // @synthesize requestParsedBlock=_requestParsedBlock;
@property(copy, nonatomic) NSPredicate *logMessageFilter; // @synthesize logMessageFilter=_logMessageFilter;
- (id)parserFromConfigurationMessage:(id)arg1;
- (void)finish;
- (void)parseRequestArrayAndPrint:(id)arg1;
- (void)eventMatched:(id)arg1;
- (id)initWithLogTypes:(unsigned long long)arg1;

@end

