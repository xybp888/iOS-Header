//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _DKSyncContext;

@interface _DKSyncContextObjectFactory : NSObject
{
    NSMutableDictionary *_instances;
    _DKSyncContext *_context;
    Class _class;
}

+ (id)objectFactoryForClass:(Class)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class class; // @synthesize class=_class;
@property(readonly, nonatomic) _DKSyncContext *context; // @synthesize context=_context;
- (id)instance;
- (id)initWithContext:(id)arg1 fabricateClass:(Class)arg2;

@end

