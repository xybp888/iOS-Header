//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTTranslationResponse_TranslationPhrase.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTranslationResponse_TranslationPhrase : FTTranslationResponse_TranslationPhrase
{
}

@property(nonatomic) _Bool low_confidence;
@property(copy, nonatomic) NSArray *spans;
@property(copy, nonatomic) NSString *meta_info;
@property(copy, nonatomic) NSArray *translated_tokens;
@property(nonatomic) float confidence;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

