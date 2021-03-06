//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HMPersonManager, NSMutableSet;

@interface HFPersonItemProvider : HFItemProvider
{
    HMHome *_home;
    CDUnknownBlockType _filter;
    HMPersonManager *_personManager;
    NSMutableSet *_personItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *personItems; // @synthesize personItems=_personItems;
@property(retain, nonatomic) HMPersonManager *personManager; // @synthesize personManager=_personManager;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)arg1 personManager:(id)arg2;

@end

