//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface UILocalizedIndexedCollation : NSObject
{
    NSLocale *_locale;
    NSArray *_sectionTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionIndexMapping;
    NSString *_transform;
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    struct __CFStringTokenizer *_tokenizer;
    _Bool _primaryLanguageIsJapanese;
    _Bool _preferJapaneseRomajiTranscriptions;
}

+ (id)currentCollation;
+ (id)collationWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) NSArray *sectionTitles;
- (void)dealloc;
- (struct __CFStringTokenizer *)tokenizer;
- (id)transformedCollationStringForString:(id)arg1;
- (id)_kanaTranscriptionForString:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

