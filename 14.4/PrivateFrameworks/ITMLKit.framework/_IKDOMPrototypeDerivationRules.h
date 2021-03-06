//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _IKDOMPrototypeDerivationRules : NSObject
{
    NSArray *_mutationRules;
    NSArray *_indexPath;
}

+ (void)removeRulesFromDOMElement:(id)arg1;
+ (id)derivationRulesForDOMElement:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, copy, nonatomic) NSArray *mutationRules; // @synthesize mutationRules=_mutationRules;
- (id)initWithIndexPath:(id)arg1 mutationRules:(id)arg2;

@end

