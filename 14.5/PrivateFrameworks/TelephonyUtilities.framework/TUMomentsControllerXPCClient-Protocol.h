//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUMomentDescriptor, TUMomentsCapabilities;

@protocol TUMomentsControllerXPCClient <NSObject>
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg1;
- (oneway void)willCaptureRemoteRequestFromRequesterID:(NSString *)arg1;
- (oneway void)didUpdateCapabilities:(TUMomentsCapabilities *)arg1 forVideoStreamToken:(long long)arg2;
@end

