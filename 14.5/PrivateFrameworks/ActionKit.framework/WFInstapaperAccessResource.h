//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFInstapaperAccessResource : WFAccessResource
{
}

+ (id)instapaperTokenSecret;
+ (id)instapaperToken;
+ (id)instapaperUsername;
+ (void)initialize;
- (void)logOut;
- (_Bool)canLogOut;
- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end

