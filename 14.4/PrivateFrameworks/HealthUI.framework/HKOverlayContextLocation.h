//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKOverlayContextLocation : NSObject
{
    long long _sectionIndex;
    long long _contextItemIndex;
}

@property(readonly, nonatomic) long long contextItemIndex; // @synthesize contextItemIndex=_contextItemIndex;
@property(readonly, nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSectionIndex:(long long)arg1 contextItemIndex:(long long)arg2;

@end

