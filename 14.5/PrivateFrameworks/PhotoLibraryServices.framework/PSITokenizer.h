//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableDictionary;

@interface PSITokenizer : NSObject
{
    void *_tagger;
    struct __CFStringTokenizer *_nameTokenizer;
    _Bool _localeIsGerman;
    _Bool _useCache;
    NSMutableDictionary *_cache;
    NSLocale *_locale;
}

+ (id)fts5StringFromString:(id)arg1 useWildcard:(_Bool)arg2;
+ (id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2;
+ (id)ftsTokenizerName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id *)arg3 error:(id *)arg4;
- (void)tokenizePersonName:(id)arg1 tokenOutput:(struct tokenOutput_t *)arg2;
- (void)_tokenizeString:(id)arg1 withContext:(CDStruct_d5c410e0 *)arg2;
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t *)arg3;
- (id)normalizeString:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 useCache:(_Bool)arg2;
- (int)registerFTS5TokenizerForDatabase:(struct sqlite3 *)arg1;

@end

