//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult
{
    NSString *_string;
    double _rotation;
}

@property(readonly) double rotation; // @synthesize rotation=_rotation;
@property(readonly) NSString *string; // @synthesize string=_string;
- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3;

@end

