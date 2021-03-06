//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelDescriptionUtils : NSObject
{
}

+ (_Bool)saveModelDescription:(id)arg1 toSpecification:(struct _MLModelSpecification *)arg2 error:(id *)arg3;
+ (struct ModelDescription *)createModelDescription:(id)arg1 error:(id *)arg2;
+ (void)copyFeatureDescriptionFrom:(id)arg1 to:(struct FeatureDescription *)arg2 error:(id *)arg3;
+ (struct FeatureType *)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id *)arg2;
+ (struct SequenceFeatureType *)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;
+ (struct DictionaryFeatureType *)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;
+ (struct ArrayFeatureType *)getArrayFeatureTypeFromConstraint:(id)arg1;
+ (struct ImageFeatureType *)getImageFeatureTypeFromConstraint:(id)arg1;
+ (struct Metadata *)createMetaData:(id)arg1;

@end

