//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMBehaviorRetriever, NSDictionary, NSMutableDictionary, _CDInteractionStore;

@interface _PSBehaviorRuleFeatureExtraction : NSObject
{
    _Bool _constantFeaturesReady;
    NSMutableDictionary *_constantFeatures;
    NSDictionary *_metadata;
    BMBehaviorRetriever *_behaviorRetriever;
    _CDInteractionStore *_interactionStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // @synthesize behaviorRetriever=_behaviorRetriever;
@property(readonly) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSMutableDictionary *constantFeatures; // @synthesize constantFeatures=_constantFeatures;
@property(nonatomic) _Bool constantFeaturesReady; // @synthesize constantFeaturesReady=_constantFeaturesReady;
- (void)extractFeaturesGivenRule:(id)arg1 contextItems:(id)arg2 features:(id)arg3;
- (void)transferConstantFeatures:(id)arg1 to:(id)arg2;
- (void)extractConstantFeaturesForMLModelWithContext:(id)arg1 features:(id)arg2;
- (int)bucketedValue:(int)arg1;
- (id)initWithMetadata:(id)arg1;

@end

