//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishBabbleModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1;

@end

