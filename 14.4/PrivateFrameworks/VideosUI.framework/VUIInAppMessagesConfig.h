//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIInAppMessagesConfig : NSObject
{
    double _minimumPresentationIntervalNormal;
    double _minimumPresentationIntervalRestricted;
    double _pageEventDelay;
    NSArray *_whitelistedFields;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *whitelistedFields; // @synthesize whitelistedFields=_whitelistedFields;
@property(nonatomic) double pageEventDelay; // @synthesize pageEventDelay=_pageEventDelay;
@property(nonatomic) double minimumPresentationIntervalRestricted; // @synthesize minimumPresentationIntervalRestricted=_minimumPresentationIntervalRestricted;
@property(nonatomic) double minimumPresentationIntervalNormal; // @synthesize minimumPresentationIntervalNormal=_minimumPresentationIntervalNormal;
- (id)init;

@end

