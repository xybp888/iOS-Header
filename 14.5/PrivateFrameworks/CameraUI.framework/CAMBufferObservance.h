//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMBufferObservance : NSObject
{
    _Bool _removedOnceEnabled;
    _Bool _fulfilled;
    _Bool _enabled;
    CDUnknownBlockType _predicate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isFulfilled) _Bool fulfilled; // @synthesize fulfilled=_fulfilled;
@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic, getter=isRemovedOnceEnabled) _Bool removedOnceEnabled; // @synthesize removedOnceEnabled=_removedOnceEnabled;
- (void)fulfillWithChange:(id)arg1;
- (_Bool)shouldBeFulfilledByChange:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 removedOnceEnabled:(_Bool)arg2;

@end

