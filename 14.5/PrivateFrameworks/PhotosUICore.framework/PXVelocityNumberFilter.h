//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNumberFilter.h>

@interface PXVelocityNumberFilter : PXNumberFilter
{
    double _minimumSampleInterval;
    double _previousVelocityWeight;
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
}

+ (id)gestureVelocityFilter;
- (double)updatedOutput;
- (id)initWithInput:(double)arg1;

@end

