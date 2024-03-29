//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LocationRefinementViewController.h"

@class NSLayoutConstraint, SearchResult, UIViewController;
@protocol MarkedLocationRefinementDelegate;

__attribute__((visibility("hidden")))
@interface MarkedLocationRefinementViewController : LocationRefinementViewController
{
    NSLayoutConstraint *_heightBarConstraint;
    UIViewController *_originalPresenterViewController;
    SearchResult *_originalMarkedLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SearchResult *originalMarkedLocation; // @synthesize originalMarkedLocation=_originalMarkedLocation;
@property(nonatomic) __weak UIViewController *originalPresenterViewController; // @synthesize originalPresenterViewController=_originalPresenterViewController;
- (void)_removeMarkedLocation:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (double)footerHeight;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (id)initWithMarkedLocation:(id)arg1;
- (id)initWithCamera:(id)arg1 crosshairType:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) __weak id <MarkedLocationRefinementDelegate> delegate; // @dynamic delegate;

@end

