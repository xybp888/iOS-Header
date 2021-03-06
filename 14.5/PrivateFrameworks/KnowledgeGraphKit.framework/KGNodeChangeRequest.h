//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;
@protocol KGNode;

@interface KGNodeChangeRequest : NSObject
{
    id <KGNode> _node;
    NSNumber *_weight;
    NSDictionary *_properties;
    long long _mutationType;
}

+ (id)removeRequestForNode:(id)arg1;
+ (id)changeRequestForNode:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long mutationType; // @synthesize mutationType=_mutationType;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) id <KGNode> node; // @synthesize node=_node;
- (id)initWithMutationType:(long long)arg1;

@end

