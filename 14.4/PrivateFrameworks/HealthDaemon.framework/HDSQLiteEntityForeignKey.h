//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteEntityForeignKey : NSObject
{
    Class _entityClass;
    NSString *_property;
    long long _deletionAction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long deletionAction; // @synthesize deletionAction=_deletionAction;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)creationSQL;
- (id)initWithEntityClass:(Class)arg1 property:(id)arg2 deletionAction:(long long)arg3;

@end

