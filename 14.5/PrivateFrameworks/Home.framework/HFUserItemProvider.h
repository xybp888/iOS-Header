//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider
{
    _Bool _includeCurrentUser;
    _Bool _includeOtherUsers;
    unsigned long long _nameStyle;
    HMHome *_home;
    NSMutableSet *_userItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *userItems; // @synthesize userItems=_userItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long nameStyle; // @synthesize nameStyle=_nameStyle;
@property(nonatomic) _Bool includeOtherUsers; // @synthesize includeOtherUsers=_includeOtherUsers;
@property(nonatomic) _Bool includeCurrentUser; // @synthesize includeCurrentUser=_includeCurrentUser;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

