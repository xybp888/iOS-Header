//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMPanoramaPaintingStatus : NSObject
{
    double _speed;
    struct CGRect _cropRectangle;
}

@property(readonly, nonatomic) struct CGRect cropRectangle; // @synthesize cropRectangle=_cropRectangle;
@property(readonly, nonatomic) double speed; // @synthesize speed=_speed;
- (id)initWithSpeed:(double)arg1 cropRectangle:(struct CGRect)arg2;

@end

