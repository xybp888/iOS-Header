//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventDeferringResolution.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay, NSString;

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution
{
}

+ (id)new;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(copy, nonatomic) BKSHIDEventDeferringToken *token; // @dynamic token;
@property(nonatomic) int pid; // @dynamic pid;
@property(nonatomic) long long versionedPID; // @dynamic versionedPID;
@property(copy, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @dynamic environment;
@property(copy, nonatomic) BKSHIDEventDisplay *display; // @dynamic display;
- (id)init;

@end

