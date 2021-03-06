//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGExtractionModel.h>

@class NSDictionary, _PASNotificationToken;

@interface SGStructuredEventExtractionModel : SGExtractionModel
{
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_inputMapping;
    NSDictionary *_outputMapping;
    NSDictionary *_supportedProviders;
    NSDictionary *_engineConfig;
}

+ (id)inputFromTaggedCharacterRanges:(id)arg1 usingInputMapping:(id)arg2 forModel:(id)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)gazetteer;
- (unsigned long long)maxMergeDistanceForSection:(id)arg1 label:(id)arg2;
- (id)outputMapping;
- (id)inputMapping;
- (id)engineConfig;
- (_Bool)isSenderSupportedForShadowExtraction:(id)arg1;
- (_Bool)isSenderSupportedForExtraction:(id)arg1;
- (id)supportedProviders;
- (id)loadModel;
- (id)modelInferences:(id)arg1;
- (void)updateAll;
- (id)_init;

@end

