//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NLTagger, NSLocale, NSString, TITransientLexiconManager;
@protocol OS_dispatch_queue;

@interface TISmartSelector : NSObject
{
    struct unique_ptr<KB::StaticDictionary, std::__1::default_delete<KB::StaticDictionary>> _staticDictionary;
    struct _LXLexicon *_contactDictionary;
    CDUnknownBlockType _contactObserver;
    unsigned long long _options;
    NSLocale *_locale;
    TITransientLexiconManager *_transientLexiconManager;
    NLTagger *_namedEntityTagger;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _dataChangedHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType dataChangedHandler; // @synthesize dataChangedHandler=_dataChangedHandler;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NLTagger *namedEntityTagger; // @synthesize namedEntityTagger=_namedEntityTagger;
@property(retain) TITransientLexiconManager *transientLexiconManager; // @synthesize transientLexiconManager=_transientLexiconManager;
@property(retain) NSLocale *locale; // @synthesize locale=_locale;
@property unsigned long long options; // @synthesize options=_options;
- (struct _NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 options:(unsigned long long)arg4;
- (void)loadStaticPhraseDictionary;
- (struct _NSRange)longestRangeEncapsulatingSubstringInDocument:(id)arg1 containingRange:(struct _NSRange)arg2 tokenizedRanges:(id)arg3 meetingCondition:(CDUnknownBlockType)arg4;
- (struct _NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
@property(retain) NSString *language;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1 language:(id)arg2 dataChangedHandler:(CDUnknownBlockType)arg3;

@end

