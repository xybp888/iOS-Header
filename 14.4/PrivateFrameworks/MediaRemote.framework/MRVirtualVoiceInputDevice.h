//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRVirtualVoiceInputDeviceDescriptor, NSData;

@interface MRVirtualVoiceInputDevice : NSObject
{
    unsigned int _deviceID;
    unsigned int _recordingState;
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int recordingState; // @synthesize recordingState=_recordingState;
@property(copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned int deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSData *data;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithDeviceID:(unsigned int)arg1;

@end

