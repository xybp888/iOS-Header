//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/MLFeatureProvider-Protocol.h>

@class NSDictionary, NSSet;

@interface SGExtractionModelCoreMLFeatureWrapper : NSObject <MLFeatureProvider>
{
    NSDictionary *_featureDict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *featureDict; // @synthesize featureDict=_featureDict;
- (id)valueForKey:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithFeatureProvider:(id)arg1;
- (id)initWithFeatureDict:(id)arg1;

@end

