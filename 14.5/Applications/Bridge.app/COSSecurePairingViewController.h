//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSManualPairingViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface COSSecurePairingViewController : COSManualPairingViewController <UITableViewDelegate, UITableViewDataSource>
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)didSelectRowAtIndexPath:(id)arg1;
- (id)_discoveredNRDeviceForAdvertisedName:(id)arg1;
- (id)cellNameForRow:(long long)arg1;
- (void)endDiscovery;
- (void)beginDiscovery;
- (_Bool)updateDiscoveredDevices;
- (Class)headerClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

