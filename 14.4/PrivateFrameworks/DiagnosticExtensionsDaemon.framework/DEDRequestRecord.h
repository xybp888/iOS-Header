//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface DEDRequestRecord : NSObject
{
    _Bool _isFailure;
    NSString *_URL;
    NSDate *_date;
    NSString *_method;
    long long _runtime;
    NSString *_requestHeader;
    NSString *_requestBody;
    NSString *_responseHeader;
    NSString *_responseBody;
}

- (void).cxx_destruct;
@property(retain) NSString *responseBody; // @synthesize responseBody=_responseBody;
@property(retain) NSString *responseHeader; // @synthesize responseHeader=_responseHeader;
@property(retain) NSString *requestBody; // @synthesize requestBody=_requestBody;
@property(retain) NSString *requestHeader; // @synthesize requestHeader=_requestHeader;
@property _Bool isFailure; // @synthesize isFailure=_isFailure;
@property long long runtime; // @synthesize runtime=_runtime;
@property(retain) NSString *method; // @synthesize method=_method;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *URL; // @synthesize URL=_URL;
- (id)formattedBody:(id)arg1 error:(id)arg2;
- (id)formattedRequestHeader:(id)arg1 session:(id)arg2 cookies:(id)arg3;
- (id)formattedResponseHeader:(id)arg1;
- (id)initWithRequest:(id)arg1 response:(id)arg2 session:(id)arg3 cookies:(id)arg4 body:(id)arg5 error:(id)arg6;
- (id)initWithURL:(id)arg1 httpMethod:(id)arg2 responseData:(id)arg3;

@end

