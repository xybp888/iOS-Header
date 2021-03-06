//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSFinancePerformable-Protocol.h>

@class AMSAuthenticateRequest, AMSFinanceDialogResponse, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceAuthenticateResponse : NSObject <AMSFinancePerformable>
{
    AMSAuthenticateRequest *_authenticateRequest;
    NSDictionary *_dialogDictionary;
    AMSFinanceDialogResponse *_dialogResponse;
}

+ (id)_performAuthRequest:(id)arg1 redirectURL:(id)arg2 taskInfo:(id)arg3;
+ (id)_handleAuthenticateResult:(id)arg1 redirectURL:(id)arg2 error:(id)arg3;
+ (id)_authenticateRequestWithAuthType:(unsigned long long)arg1 taskInfo:(id)arg2 dialogResponse:(id)arg3;
+ (id)performAuthForTypesFromResponse:(id)arg1 taskInfo:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSFinanceDialogResponse *dialogResponse; // @synthesize dialogResponse=_dialogResponse;
@property(retain, nonatomic) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
@property(readonly, nonatomic) AMSAuthenticateRequest *authenticateRequest; // @synthesize authenticateRequest=_authenticateRequest;
- (id)_locateActionableButtonUsingDialogResponse:(id)arg1;
- (id)performWithTaskInfo:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1 taskInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

