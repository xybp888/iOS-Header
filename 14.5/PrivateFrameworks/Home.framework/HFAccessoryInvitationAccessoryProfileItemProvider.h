//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessoryProfileItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider
{
    HMUser *_user;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (id)invalidationReasons;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 user:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

