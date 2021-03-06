//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionRemoteViewController.h>

#import <GameCenterUI/GKChallengeIssueHostProtocol-Protocol.h>

@class GKGame, GKHostedChallengeIssueController, NSString;

@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController <GKChallengeIssueHostProtocol>
{
    GKHostedChallengeIssueController *_delegateWeak;
}

+ (id)challengeExtension;
- (void).cxx_destruct;
@property(nonatomic) __weak GKHostedChallengeIssueController *delegate; // @synthesize delegate=_delegateWeak;
- (id)extensionObjectProxy;
- (void)extensionIsCanceling;
- (void)messageFromExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

