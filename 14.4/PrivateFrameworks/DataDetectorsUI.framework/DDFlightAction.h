//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface DDFlightAction : DDAction
{
    UINavigationController *_viewController;
}

- (void).cxx_destruct;
- (id)viewController;
- (void)closePressed;
- (int)interactionType;
- (id)icon;
- (id)localizedName;
- (void)prepareViewControllerForActionController:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (void)adaptForPresentationInPopover:(_Bool)arg1;

@end

