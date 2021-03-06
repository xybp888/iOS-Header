//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPKPassSyncChange, NSDate;

@interface NPKPassSyncServiceSyncStatus : NSObject
{
    NPKPassSyncChange *_lastKnownOutgoingChange;
    NSDate *_outgoingChangeDate;
    NPKPassSyncChange *_lastKnownIncomingChange;
    NSDate *_incomingChangeDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *incomingChangeDate; // @synthesize incomingChangeDate=_incomingChangeDate;
@property(retain, nonatomic) NPKPassSyncChange *lastKnownIncomingChange; // @synthesize lastKnownIncomingChange=_lastKnownIncomingChange;
@property(retain, nonatomic) NSDate *outgoingChangeDate; // @synthesize outgoingChangeDate=_outgoingChangeDate;
@property(retain, nonatomic) NPKPassSyncChange *lastKnownOutgoingChange; // @synthesize lastKnownOutgoingChange=_lastKnownOutgoingChange;
- (void)reset;
- (_Bool)shouldSyncWithCurrentIncomingChange:(id)arg1 currentOutgoingChange:(id)arg2 currentDate:(id)arg3;

@end

