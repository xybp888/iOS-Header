//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PXTilingLayout;

@interface PXTilingChange : NSObject
{
    NSMutableArray *_events;
    PXTilingLayout *_initialLayout;
    NSArray *_compositionInvalidationContexts;
    struct CGSize _initialReferenceSize;
    struct UIEdgeInsets _initialContentInset;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *compositionInvalidationContexts; // @synthesize compositionInvalidationContexts=_compositionInvalidationContexts;
@property(readonly, nonatomic) struct UIEdgeInsets initialContentInset; // @synthesize initialContentInset=_initialContentInset;
@property(readonly, nonatomic) struct CGSize initialReferenceSize; // @synthesize initialReferenceSize=_initialReferenceSize;
@property(readonly, nonatomic) PXTilingLayout *initialLayout; // @synthesize initialLayout=_initialLayout;
@property(readonly, nonatomic) NSArray *invalidationContexts;
- (id)defaultAnimationOptionsForTilingController:(id)arg1;
@property(readonly, nonatomic) _Bool coordinateSpaceDidChange;
@property(readonly, nonatomic) struct UIEdgeInsets toContentInset;
@property(readonly, nonatomic) struct UIEdgeInsets fromContentInset;
@property(readonly, nonatomic) struct CGSize toReferenceSize;
@property(readonly, nonatomic) struct CGSize fromReferenceSize;
@property(readonly, nonatomic) PXTilingLayout *toLayout;
@property(readonly, nonatomic) PXTilingLayout *fromLayout;
- (id)description;
@property(readonly, nonatomic) NSArray *events;
- (void)addEvent:(id)arg1;
- (void)recordCompositionInvalidationContexts:(id)arg1;
- (void)recordContentInset:(struct UIEdgeInsets)arg1;
- (void)recordReferenceSize:(struct CGSize)arg1;
- (void)recordLayout:(id)arg1;
@property(readonly, nonatomic, getter=isIdentity) _Bool identity;
- (id)init;

@end

