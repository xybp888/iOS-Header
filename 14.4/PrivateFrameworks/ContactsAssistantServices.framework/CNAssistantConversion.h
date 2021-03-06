//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNAssistantConversion : NSObject
{
}

+ (void)applyUpdate:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (void)removeFieldsFromPerson:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (void)setFieldsFromPerson:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (void)addFieldsFromPerson:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (id)relationsFromPerson:(id)arg1;
+ (id)phoneNumbersFromPerson:(id)arg1;
+ (id)emailAddressesFromPerson:(id)arg1;
+ (id)addressesFromPerson:(id)arg1;
+ (id)keysFromPerson:(id)arg1;
+ (void)markMeContactInPeople:(id)arg1 usingStore:(id)arg2;
+ (id)verifyContact:(id)arg1 hasDescriptorsForRequiredKeys:(id)arg2;
+ (id)socialProfilesFromContact:(id)arg1;
+ (id)relationsForSyncFromContact:(id)arg1;
+ (id)relationsFromContact:(id)arg1;
+ (id)addressesForSyncFromContact:(id)arg1;
+ (id)addressesFromContact:(id)arg1;
+ (id)phoneNumbersForSyncFromContact:(id)arg1;
+ (id)phoneNumbersFromContact:(id)arg1;
+ (id)emailAddressesForSyncFromContact:(id)arg1;
+ (id)emailAddressesFromContact:(id)arg1;
+ (id)filterLabeledValues:(id)arg1 droppingEmptyLabels:(_Bool)arg2 droppingDuplicates:(_Bool)arg3;
+ (id)createSASourceFromCNContainer:(id)arg1;
+ (id)createSAPersonFromCNContactWithExternalIdentifier:(id)arg1;
+ (id)createSAPersonFromCNContact:(id)arg1;
+ (id)createSAPersonFromCNContact:(id)arg1 conversionType:(long long)arg2;
+ (id)personFromContact:(id)arg1;
+ (id)personFromContact:(id)arg1 useABPerson:(_Bool)arg2;
+ (id)personForSyncFromContact:(id)arg1;
+ (id)personFromMeContact:(id)arg1;
+ (id)descriptorsForRequiredKeys;
+ (id)descriptorsForRequiredKeysForConversionType:(long long)arg1;

@end

