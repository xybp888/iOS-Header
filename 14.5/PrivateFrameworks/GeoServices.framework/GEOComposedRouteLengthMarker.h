//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOComposedRouteLengthMarker : NSObject
{
    unsigned long long _pathIndex;
    unsigned long long _pointIndex;
    double _length;
}

@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) unsigned long long pointIndex; // @synthesize pointIndex=_pointIndex;
@property(nonatomic) unsigned long long pathIndex; // @synthesize pathIndex=_pathIndex;
- (id)description;
- (long long)compare:(id)arg1;

@end

