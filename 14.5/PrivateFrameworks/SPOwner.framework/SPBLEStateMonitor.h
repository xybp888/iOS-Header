//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, NSString;
@protocol SPBLEStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface SPBLEStateMonitor : NSObject <CBCentralManagerDelegate>
{
    unsigned long long _bleState;
    id <SPBLEStateMonitorDelegate> _delegate;
    CBCentralManager *_centralManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) __weak id <SPBLEStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bleState; // @synthesize bleState=_bleState;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)notifyDelegate:(unsigned long long)arg1;
- (void)startMonitoring;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

