//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKWorkoutRoute, NSFileHandle, NSISO8601DateFormatter, NSURL;

@interface HKGPXExporter : NSObject
{
    HKWorkoutRoute *_route;
    NSFileHandle *_fileHandle;
    NSISO8601DateFormatter *_isoFormatter;
    _Bool _isFinished;
    NSURL *_URL;
}

+ (id)_displayNameForRoute:(id)arg1;
+ (id)fileNameForRoute:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (_Bool)_appendString:(id)arg1 error:(id *)arg2;
- (_Bool)_appendGPXHeaderWithError:(id *)arg1;
- (id)_trackpointEntryForLocation:(id)arg1;
- (_Bool)finishWithError:(id *)arg1;
- (_Bool)appendLocations:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 route:(id)arg2;

@end

