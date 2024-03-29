//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PubSub/PSEventInvocation-Protocol.h>

@class NSString;

@interface PSEventSelectorInvocation : NSObject <PSEventInvocation>
{
    id _receiver;
    SEL _selector;
}

- (void).cxx_destruct;
- (void)invokeWithEvent:(id)arg1 forTopicWithName:(id)arg2;
- (id)initWithReceiver:(id)arg1 selector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

