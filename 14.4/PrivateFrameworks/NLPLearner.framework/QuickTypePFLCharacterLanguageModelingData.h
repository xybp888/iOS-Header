//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NLPLearner/QuickTypePFLLanguageModelingData.h>

@class CVNLPTokenIDConverter, NSLocale;

__attribute__((visibility("hidden")))
@interface QuickTypePFLCharacterLanguageModelingData : QuickTypePFLLanguageModelingData
{
    NSLocale *_locale;
    CVNLPTokenIDConverter *_tokenConverter;
}

+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)loadFromCoreDuet:(id)arg1;
- (void)addResource:(id)arg1;
- (id)initWithLocale:(id)arg1;

@end

