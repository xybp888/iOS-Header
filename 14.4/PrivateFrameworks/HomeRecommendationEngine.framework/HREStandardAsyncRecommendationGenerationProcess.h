//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMHome, NSSet;

@interface HREStandardAsyncRecommendationGenerationProcess : NSObject
{
    HMHome *_home;
    NSSet *_sourceItems;
    NSSet *_sourceActionObjects;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSSet *sourceActionObjects; // @synthesize sourceActionObjects=_sourceActionObjects;
@property(retain, nonatomic) NSSet *sourceItems; // @synthesize sourceItems=_sourceItems;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)generateRecommendations;
- (_Bool)shouldGenerateRecommendations;
- (id)initWithHome:(id)arg1 sourceItems:(id)arg2 options:(unsigned long long)arg3;

@end

