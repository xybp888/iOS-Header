//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceSerializable-Protocol.h>
#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSString;

@protocol SASettingAppSettingCommand <SAAceSerializable, SAClientBoundCommand>
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSString *appWithSettingsId;
@end

