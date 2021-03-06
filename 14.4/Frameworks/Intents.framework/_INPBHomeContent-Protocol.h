//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBHomeAttribute, _INPBHomeFilter;

@protocol _INPBHomeContent <NSObject>
+ (Class)actionsType;
@property(readonly, nonatomic) _Bool hasFilter;
@property(retain, nonatomic) _INPBHomeFilter *filter;
@property(readonly, nonatomic) unsigned long long actionsCount;
@property(copy, nonatomic) NSArray *actions;
- (_INPBHomeAttribute *)actionsAtIndex:(unsigned long long)arg1;
- (void)addActions:(_INPBHomeAttribute *)arg1;
- (void)clearActions;
@end

