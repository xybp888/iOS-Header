//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface ICDCloudPushNotificationAccountRegistrationState : NSObject
{
    NSData *_APNSToken;
    NSArray *_mediaKinds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *mediaKinds; // @synthesize mediaKinds=_mediaKinds;
@property(retain, nonatomic) NSData *APNSToken; // @synthesize APNSToken=_APNSToken;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

