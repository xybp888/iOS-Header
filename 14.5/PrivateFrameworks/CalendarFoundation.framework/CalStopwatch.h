//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CalStopwatch : NSObject
{
    _Bool _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    _Bool _hasValidElapsedTime;
    NSMutableDictionary *_events;
    _Bool _usesSignalFlags;
}

- (void).cxx_destruct;
@property _Bool usesSignalFlags; // @synthesize usesSignalFlags=_usesSignalFlags;
- (double)markEventEnd:(id)arg1;
- (double)markEventSplit:(id)arg1;
- (void)markEventStart:(id)arg1;
- (id)elapsedTimeAsString:(int)arg1;
- (unsigned long long)elapsedTimeAsNumber:(int)arg1;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)reset;
- (void)stop;
- (void)start;
- (id)description;
- (id)init;

@end

