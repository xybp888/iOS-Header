//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PKTextInputLanguageSpec : NSObject
{
    long long __languageBehavior;
    NSArray *__locales;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *_locales; // @synthesize _locales=__locales;
@property(readonly, nonatomic) long long _languageBehavior; // @synthesize _languageBehavior=__languageBehavior;
@property(readonly, nonatomic) NSArray *debugLocaleDescriptions;
@property(readonly, nonatomic) double singleCharacterCommitDelay;
@property(readonly, nonatomic) double standardCommitDelay;
@property(readonly, nonatomic) double strokeFadeOutDuration;
@property(readonly, nonatomic) long long uncommittedTokenColumnCount;
- (void)configureLocalesForRecognitionManager:(id)arg1;
- (id)initWithLocales:(id)arg1;

@end

