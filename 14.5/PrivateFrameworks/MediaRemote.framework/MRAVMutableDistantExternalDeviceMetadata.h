//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class MRDeviceInfo, MRSupportedProtocolMessages, NSString;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata
{
}

@property(nonatomic) _Bool usingSystemPairing; // @dynamic usingSystemPairing;
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @dynamic supportedMessages;
@property(nonatomic) long long hostPort; // @dynamic hostPort;
@property(copy, nonatomic) NSString *hostName; // @dynamic hostName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

