//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPromise, NSDate;
@protocol OS_dispatch_source;

@interface MTPromiseWithTimeout : NSObject
{
    NSDate *_startDate;
    MTPromise *_promise;
    NSObject<OS_dispatch_source> *_dispatchSourceTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceTimer; // @synthesize dispatchSourceTimer=_dispatchSourceTimer;
@property(retain, nonatomic) MTPromise *promise; // @synthesize promise=_promise;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)dealloc;
- (void)finishWithResult:(id)arg1;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 timeoutBlock:(CDUnknownBlockType)arg3;

@end

