//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer, NSCharacterSet, NSDictionary, NSLocale;

@interface CHLexiconCorrectionStep : CHPostprocessingStep
{
    _Bool _shouldAutoCapitalize;
    _Bool _shouldAutoCorrect;
    int _autoCapitalizationMode;
    CHRecognizer *_recognizer;
    NSLocale *_locale;
    const struct _LXLexicon *_staticLexicon;
    const struct _LXLexicon *_customLexicon;
    const struct _LXLexicon *_phraseLexicon;
    const struct _LXLexicon *_customPhraseLexicon;
    NSDictionary *_textReplacements;
    NSCharacterSet *_consumableStrokesCharSet;
    NSCharacterSet *_fullWidthPunctuationThatExpectsUppercaseAfter;
    NSCharacterSet *_punctuationThatExpectsUppercaseAfter;
}

@property(retain, nonatomic) NSCharacterSet *punctuationThatExpectsUppercaseAfter; // @synthesize punctuationThatExpectsUppercaseAfter=_punctuationThatExpectsUppercaseAfter;
@property(retain, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter; // @synthesize fullWidthPunctuationThatExpectsUppercaseAfter=_fullWidthPunctuationThatExpectsUppercaseAfter;
@property(retain, nonatomic) NSCharacterSet *consumableStrokesCharSet; // @synthesize consumableStrokesCharSet=_consumableStrokesCharSet;
@property(retain, nonatomic) NSDictionary *textReplacements; // @synthesize textReplacements=_textReplacements;
@property(nonatomic) _Bool shouldAutoCorrect; // @synthesize shouldAutoCorrect=_shouldAutoCorrect;
@property(readonly, nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property(nonatomic) const struct _LXLexicon *customPhraseLexicon; // @synthesize customPhraseLexicon=_customPhraseLexicon;
@property(nonatomic) const struct _LXLexicon *phraseLexicon; // @synthesize phraseLexicon=_phraseLexicon;
@property(nonatomic) const struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property(nonatomic) const struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) CHRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) _Bool shouldAutoCapitalize; // @synthesize shouldAutoCapitalize=_shouldAutoCapitalize;
- (id)process:(id)arg1;
- (id)applyLexiconCorrectionOnToken:(id)arg1 hasEmptyContext:(_Bool)arg2 history:(id)arg3 historyEndsAlphabetic:(_Bool)arg4 historyEndsWithLineBreak:(_Bool)arg5 prevToken:(id)arg6 shouldCapitalizeGivenHistory:(_Bool)arg7 tokenIndex:(long long)arg8 textReplacements:(id)arg9 isSingleIsolatedCharacter:(_Bool)arg10 contextBeforeToken:(id)arg11;
- (id)applyLexiconCorrections:(id)arg1 shouldCapitalizeWord:(_Bool)arg2 shouldSkipEntryCorrection:(_Bool)arg3 outBestTokenIndex:(long long *)arg4 bestLexiconTokenScore:(double *)arg5 textReplacements:(id)arg6 contextBeforeToken:(id)arg7;
- (id)getSpellCorrectedToken:(id)arg1 contextBeforeToken:(id)arg2;
- (void)dealloc;
- (id)initWithAutoCapitalizationMode:(int)arg1 shouldAutoCorrect:(_Bool)arg2 locale:(id)arg3 staticLexicon:(struct _LXLexicon *)arg4 customLexicon:(struct _LXLexicon *)arg5 phraseLexicon:(struct _LXLexicon *)arg6 customPhraseLexicon:(struct _LXLexicon *)arg7 recognizer:(id)arg8 textReplacements:(id)arg9;

@end

