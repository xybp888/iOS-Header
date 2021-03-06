//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;
@protocol StoreKitBagContract;

@interface StoreKitMessagesServerRequest : NSObject
{
    id <StoreKitBagContract> _bagContract;
    ACAccount *_account;
    NSString *_bundleID;
    long long _status;
}

- (void).cxx_destruct;
- (id)_requestURL;
- (id)_parseURLFromResponseData:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBagContract:(id)arg1 account:(id)arg2 bundleID:(id)arg3 status:(long long)arg4;

@end

