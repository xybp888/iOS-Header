//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDPhoneCallController, MRDRemoteControlCommand;

@protocol MRDPhoneCallControllerDelegate <NSObject>

@optional
- (void)phoneCallController:(MRDPhoneCallController *)arg1 didRequestCommand:(MRDRemoteControlCommand *)arg2;
@end

