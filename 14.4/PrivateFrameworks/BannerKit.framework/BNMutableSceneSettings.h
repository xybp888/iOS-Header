//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

@class NSString;

@interface BNMutableSceneSettings : UIMutableApplicationSceneSettings
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) Class clientContainerViewControllerClass;
@property(nonatomic, getter=isUserInteractionInProgress) _Bool userInteractionInProgress;
@property(copy, nonatomic) NSString *revocationReason;
@property(nonatomic) int bannerAppearState;
@property(nonatomic) int viewControllerAppearState;
@property(nonatomic) struct CGSize presentationSize;
@property(nonatomic) struct CGSize containerSize;

@end

