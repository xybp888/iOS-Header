//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, UIFont, UIFontDescriptor;

@interface TSWPFont : NSObject
{
    _Bool _isFallbackFont;
    NSString *_desiredPostScriptName;
    NSString *_postScriptName;
    NSString *_familyName;
    unsigned long long _type;
    UIFont *_platformFont;
    NSString *_localizedFamilyName;
    UIFontDescriptor *_platformFontDescriptor;
    unsigned long long _hashValue;
    NSMutableDictionary *_alternatePlatformFonts;
    NSArray *_creationBacktrace;
}

+ (_Bool)isKeyValueProxyLeafType;
+ (id)postScriptNameForFamilyName:(id)arg1;
+ (id)facesOfFontFamily:(id)arg1;
+ (id)localizedFamilyNameForPlatformFont:(id)arg1;
+ (id)loadPlatformFontForPostScriptName:(id)arg1 size:(double)arg2;
+ (unsigned long long)optionsForLoadingPlatformFontWithPostScriptName:(id)arg1;
+ (_Bool)isSystemFontName:(id)arg1;
+ (id)loadPlatformFontOrFallbackForPostScriptName:(id)arg1 size:(double)arg2 foundType:(unsigned long long *)arg3;
+ (id)baseFontForFamilyName:(id)arg1;
+ (id)baseFontWithDescriptor:(id)arg1;
+ (id)fontWithDesiredPostScriptName:(id)arg1 atSize:(double)arg2;
+ (id)fontWithDesiredPostScriptName:(id)arg1 fallbackFont:(id)arg2 ofType:(unsigned long long)arg3;
+ (id)fontWithOpaqueIdentifier:(id)arg1;
+ (id)fontWithDesiredPostScriptName:(id)arg1;
+ (id)localizedMasqueradingFontFamilyNames;
+ (id)masqueradingFontNames;
+ (id)systemFont;
+ (id)helveticaFont;
+ (id)missingFont;
+ (id)missingFontPostScriptName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) NSMutableDictionary *alternatePlatformFonts; // @synthesize alternatePlatformFonts=_alternatePlatformFonts;
@property(nonatomic) _Bool isFallbackFont; // @synthesize isFallbackFont=_isFallbackFont;
@property(nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
@property(retain, nonatomic) UIFontDescriptor *platformFontDescriptor; // @synthesize platformFontDescriptor=_platformFontDescriptor;
@property(retain, nonatomic) NSString *localizedFamilyName; // @synthesize localizedFamilyName=_localizedFamilyName;
@property(retain, nonatomic) UIFont *platformFont; // @synthesize platformFont=_platformFont;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *postScriptName; // @synthesize postScriptName=_postScriptName;
@property(readonly, nonatomic) NSString *desiredPostScriptName; // @synthesize desiredPostScriptName=_desiredPostScriptName;
@property(readonly, nonatomic) _Bool shouldShowFallbackBadge;
@property(readonly, nonatomic) TSWPFont *baseFont;
@property(readonly, nonatomic) _Bool italic;
@property(readonly, nonatomic) _Bool bold;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) NSArray *familyFaces;
- (id)description;
@property(readonly, nonatomic) NSString *displayName;
- (id)copyWithSize:(double)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3 traits:(id)arg4;
- (id)copyWithSize:(double)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;
- (id)copyWithSize:(double)arg1;
- (const struct __CTFont *)ctFontForSize:(double)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;
- (struct __CTFont *)ctFontForSize:(double)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3 traits:(id)arg4;
- (const struct __CTFont *)ctFontForSize:(double)arg1;
@property(readonly, nonatomic) const struct __CTFont *ctFont;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isBaseFontEqualToBaseFontFor:(id)arg1;
@property(readonly, nonatomic) _Bool isRequestedFont;
@property(readonly, nonatomic) _Bool isMasqueradingFont;
- (_Bool)isMasqueradingFontName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDesiredPostScriptName:(id)arg1 platformFontDescriptor:(id)arg2 andPlatformFont:(id)arg3 ofType:(unsigned long long)arg4;
- (id)initWithDesiredPostScriptName:(id)arg1 platformFontDescriptor:(id)arg2 andPlatformFont:(id)arg3 ofType:(unsigned long long)arg4 localizedFamilyName:(id)arg5;
- (id)initWithDesiredPostScriptName:(id)arg1 size:(double)arg2;
- (id)initWithDesiredPostScriptName:(id)arg1;
- (id)init;

@end

