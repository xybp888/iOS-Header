//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TROperation.h>

@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation
{
    _Bool _shouldIgnoreAuthFailures;
    _Bool _shouldForceInteractiveAuth;
    NSSet *_targetedServices;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool shouldForceInteractiveAuth; // @synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth;
@property(nonatomic) _Bool shouldIgnoreAuthFailures; // @synthesize shouldIgnoreAuthFailures=_shouldIgnoreAuthFailures;
@property(retain, nonatomic) NSSet *targetedServices; // @synthesize targetedServices=_targetedServices;
- (void)execute;

@end

