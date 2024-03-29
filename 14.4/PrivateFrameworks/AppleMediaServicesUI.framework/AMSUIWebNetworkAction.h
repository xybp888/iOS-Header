//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebActionRunnable-Protocol.h>

@class ACAccount, AMSUIWebClientContext, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebNetworkAction : NSObject <AMSUIWebActionRunnable>
{
    _Bool _includeiCloudTokens;
    NSString *_body;
    ACAccount *_account;
    NSDictionary *_headers;
    NSString *_method;
    NSURL *_URL;
    AMSUIWebClientContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(nonatomic) _Bool includeiCloudTokens; // @synthesize includeiCloudTokens=_includeiCloudTokens;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

