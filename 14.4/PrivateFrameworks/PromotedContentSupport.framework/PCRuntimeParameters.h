//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PCRuntimeParameters : NSObject
{
}

+ (void)clientHandlesImpressionTracking:(_Bool)arg1;
+ (void)rateLimitRequestsInFeed:(float)arg1 inArticle:(float)arg2 betweenArticle:(float)arg3 videoInArticle:(float)arg4 nativeInFeed:(float)arg5 nativeInArticle:(float)arg6;
+ (void)rateLimitRequests:(float)arg1;
+ (void)setContextPrefetchLimit:(long long)arg1;
+ (long long)contextPrefetchLimit;

@end

