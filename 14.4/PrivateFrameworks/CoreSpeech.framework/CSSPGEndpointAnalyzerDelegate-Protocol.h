//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSSPGEndpointAnalyzer;

@protocol CSSPGEndpointAnalyzerDelegate <NSObject>

@optional
- (void)spgEndpointAnalyzerDidDetectEndpoint:(CSSPGEndpointAnalyzer *)arg1;
- (void)spgEndpointAnalyzer:(CSSPGEndpointAnalyzer *)arg1 hasSilenceScoreEstimate:(double)arg2;
@end

