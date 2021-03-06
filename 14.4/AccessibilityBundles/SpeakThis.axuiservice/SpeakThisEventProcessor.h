//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXEventProcessor.h>

@class AXAssertion, NSObject;
@protocol OS_dispatch_queue, SpeakThisEventProcessorDelegate;

@interface SpeakThisEventProcessor : AXEventProcessor
{
    NSObject<OS_dispatch_queue> *_hidDispatchQueue;
    AXAssertion *_disableSystemGesturesAssertion;
    id <SpeakThisEventProcessorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SpeakThisEventProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_handleEvent:(id)arg1;
- (id)init;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;

@end

