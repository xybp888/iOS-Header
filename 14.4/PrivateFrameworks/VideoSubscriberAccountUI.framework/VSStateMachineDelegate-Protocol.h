//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSString, VSStateMachine;

@protocol VSStateMachineDelegate <NSObject>

@optional
- (void)stateMachine:(VSStateMachine *)arg1 transitionFromState:(NSString *)arg2;
- (void)stateMachine:(VSStateMachine *)arg1 transitionToState:(NSString *)arg2;
@end

