//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKSession-Protocol.h>

@class NSString;
@protocol PKSessionDelegate;

@interface PKDASession : NSObject <PKSession>
{
    _Atomic unsigned int _sessionState;
    unsigned long long _state;
    id <PKSessionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (void)endSession;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

