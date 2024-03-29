//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputChinese/TIKeyboardInputManagerChinese.h>

#import <TextInputChinese/TIKeyboardInputManagerChineseCompletion-Protocol.h>

@class NSMutableString, NSString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion>
{
    NSMutableString *_searchString;
    _Bool _keepRemainingInput;
    NSString *_remainingInput;
    _Bool _previousActionWasAutoConfirmation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool previousActionWasAutoConfirmation; // @synthesize previousActionWasAutoConfirmation=_previousActionWasAutoConfirmation;
@property(retain, nonatomic) NSString *remainingInput; // @synthesize remainingInput=_remainingInput;
- (id)searchStringForMarkedText;
- (id)formattedSearchString;
- (id)markedTextWithAutoconvertedCandidates;
- (id)didAcceptCandidate:(id)arg1;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (id)sortingMethods;
- (_Bool)supportsLearning;
- (_Bool)shouldExtendPriorWord;
- (_Bool)usesAutoDeleteWord;
- (_Bool)usesCandidateSelection;
- (_Bool)suppliesCompletions;
- (_Bool)shouldLookForCompletionCandidates;
- (void)inputLocationChanged;
- (void)acceptInput;
- (_Bool)acceptInputString:(id)arg1;
- (void)loadDictionaries;
- (_Bool)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardBehaviors;
- (id)keyboardConfigurationLayoutTag;
- (void)clearInput;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)cancelCandidatesThread;
- (id)candidateResultSet;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (_Bool)hasCandidates;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)arg1;
- (id)rawInputString;
@property(readonly, nonatomic) NSMutableString *searchString; // @synthesize searchString=_searchString;

@end

