//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostSupportSubsystemCategoryFilter.h>

@interface SignpostSupportSubsystemCategoryWhitelist : SignpostSupportSubsystemCategoryFilter
{
}

- (void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2;
- (_Bool)passesSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithEntries:(id)arg1;
- (unsigned long long)_compoundPredicateType;
- (_Bool)_wantsNotSubsystem;

@end

