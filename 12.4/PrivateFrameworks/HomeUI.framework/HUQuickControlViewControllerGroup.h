//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUQuickControlViewController;

@interface HUQuickControlViewControllerGroup : NSObject
{
    HUQuickControlViewController *_primaryViewController;
    HUQuickControlViewController *_alternateViewController;
}

@property(readonly, nonatomic) HUQuickControlViewController *alternateViewController; // @synthesize alternateViewController=_alternateViewController;
@property(readonly, nonatomic) HUQuickControlViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
- (void).cxx_destruct;
- (id)initWithPrimaryViewController:(id)arg1 alternateViewController:(id)arg2;

@end

