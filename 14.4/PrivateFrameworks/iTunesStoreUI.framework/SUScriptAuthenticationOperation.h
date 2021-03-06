//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext, UIViewController;

@interface SUScriptAuthenticationOperation : ISOperation
{
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(retain) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;
- (void)setScriptOptions:(id)arg1;
- (void)sendCompletionCallback:(id)arg1;
- (void)run;
- (id)authenticatedAccountDSID;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)init;

@end

