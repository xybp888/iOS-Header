//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol SBMainDisplayInterfaceOrientationSource <NSObject>
@property(readonly, nonatomic) double orientationSourceLevel;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) long long activeInterfaceOrientation;

@optional
@property(readonly, copy, nonatomic) NSString *orientationSourceDescription;
@end

