//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRTextDetectorResults, CRTextFeature, CRTextRecognizerResults, NSArray, NSDate;

@interface CRTextResults : NSObject
{
    NSDate *_startTime;
    NSDate *_endTime;
    CRTextDetectorResults *_detectorResults;
    CRTextRecognizerResults *_recognizerResults;
    NSArray *_textFeatures;
    CRTextFeature *_titleTextFeature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CRTextFeature *titleTextFeature; // @synthesize titleTextFeature=_titleTextFeature;
@property(retain, nonatomic) NSArray *textFeatures; // @synthesize textFeatures=_textFeatures;
@property(retain, nonatomic) CRTextRecognizerResults *recognizerResults; // @synthesize recognizerResults=_recognizerResults;
@property(retain, nonatomic) CRTextDetectorResults *detectorResults; // @synthesize detectorResults=_detectorResults;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;

@end

