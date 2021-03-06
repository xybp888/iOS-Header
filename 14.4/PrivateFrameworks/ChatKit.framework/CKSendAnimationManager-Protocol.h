//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray;
@protocol CKSendAnimationBalloonProvider, CKSendAnimationContext, CKSendAnimationManagerDelegate;

@protocol CKSendAnimationManager <NSObject>
@property(nonatomic) __weak id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
@property(nonatomic) __weak id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
- (void)animateMessages:(NSArray *)arg1;
- (void)animationDidFinishWithContext:(id <CKSendAnimationContext>)arg1;
- (void)animationWillBeginWithContext:(id <CKSendAnimationContext>)arg1;
@end

