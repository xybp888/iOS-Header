//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDActivityEventRecording-Protocol.h>
#import <CoreDuet/_CDAppActionRecording-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording>
{
    NSString *_previousActivityType;
    NSString *_previousTitle;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
}

+ (id)appActionRecorder;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *previousTitle; // @synthesize previousTitle=_previousTitle;
@property(retain, nonatomic) NSString *previousActivityType; // @synthesize previousActivityType=_previousActivityType;
- (void)recordUserActivityEvents:(id)arg1;
- (void)recordUserActivityEvent:(id)arg1;
- (void)recordUserActivityEventForCollection:(id)arg1;
- (void)_recordUserActivityEvent:(id)arg1;
- (void)recordAppAction:(id)arg1;
- (void)createConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

