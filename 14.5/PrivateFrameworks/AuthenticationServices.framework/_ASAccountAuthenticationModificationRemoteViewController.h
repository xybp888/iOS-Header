//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <AuthenticationServices/ASAccountAuthenticationModificationRemoteViewControllerProtocol-Protocol.h>

@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate;

@interface _ASAccountAuthenticationModificationRemoteViewController : _UIRemoteViewController <ASAccountAuthenticationModificationRemoteViewControllerProtocol>
{
    id <_ASAccountAuthenticationModificationRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_ASAccountAuthenticationModificationRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dismissAccountModificationRemoteViewController;
- (void)presentAccountModificationRemoteViewController;
- (void)requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDidFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;
- (void)upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;

@end

