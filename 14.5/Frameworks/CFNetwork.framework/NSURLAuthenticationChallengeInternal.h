//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSURLCredential, NSURLProtectionSpace, NSURLResponse;
@protocol NSURLAuthenticationChallengeSender;

@interface NSURLAuthenticationChallengeInternal : NSObject
{
    NSURLProtectionSpace *space;
    NSURLCredential *proposedCredential;
    long long previousFailureCount;
    NSURLResponse *failureResponse;
    NSError *error;
    id <NSURLAuthenticationChallengeSender> sender;
    NSArray *protectionSpacesForChallenge;
    long long preferredProtSpaceIndex;
}

- (void)dealloc;

@end

