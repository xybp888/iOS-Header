//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSyncToken-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol NAScheduler;

@interface MTCompanionSyncRequest : NSObject <MTSyncToken>
{
    _Bool _completed;
    unsigned long long _requestType;
    NSError *_error;
    NSMutableArray *_completionBlocks;
    id <NAScheduler> _serializer;
}

+ (id)requestWithType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (id)requestDescription;
@property(readonly, copy) NSString *description;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)complete:(id)arg1;
- (id)initWithRequestType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

