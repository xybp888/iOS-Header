//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RMHTTPLog : NSObject
{
}

+ (id)_logDirectoryForEnrollmentToken:(id)arg1;
+ (void)_writeRequestLogToURL:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;
+ (void)logHTTPDetailsForEnrollmentToken:(id)arg1 request:(id)arg2 response:(id)arg3 responseURL:(id)arg4 responseError:(id)arg5;
+ (void)logHTTPDetailsForEnrollmentToken:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;

@end

