//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WBSPasswordGenerationManager : NSObject
{
    struct _LXLexicon *_lexiconForEnglish;
    struct _LXLexicon *_lexiconForUserLocale;
    NSDictionary *_passwordRequirementsByDomain;
}

+ (_Bool)passwordLooksLikePasswordManagerGeneratedPassword:(id)arg1;
+ (unsigned long long)minimumPasswordLength;
+ (id)requirementsForPasswordRuleSet:(id)arg1 respectingMinLength:(id)arg2 maxLength:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *passwordRequirementsByDomain; // @synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain;
- (_Bool)passwordGenerationIsDisallowedByRequirements:(id)arg1;
- (_Bool)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
- (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
- (id)defaultRequirementsForURL:(id)arg1;
- (id)defaultRequirementsForDomain:(id)arg1;
- (id)generatedPasswordMatchingRequirements:(id)arg1;
- (_Bool)_tokensContainUnwantedWords:(id)arg1;
- (void)_lexiconEnumerateEntries:(struct _LXLexicon *)arg1 forString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_moreTypeablePassword;
- (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithPasswordRequirementsByDomain:(id)arg1;
- (id)init;

@end

