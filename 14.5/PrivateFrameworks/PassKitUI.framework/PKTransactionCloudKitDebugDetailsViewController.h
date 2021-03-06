//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableDictionary, NSMutableSet, PKCloudRecordObject, PKCloudStoreService, PKPaymentTransaction;

@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController
{
    PKCloudRecordObject *_cloudRecordObject;
    NSArray *_records;
    PKPaymentTransaction *_transaction;
    PKCloudStoreService *_cloudStoreService;
    _Bool _loadingCloudRecordObject;
    _Bool _inBridge;
    NSMutableDictionary *_keysForRecordName;
    NSMutableDictionary *_valuesForRecordName;
    NSMutableSet *_cloudStoreObjectHandlers;
}

- (void).cxx_destruct;
- (void)_processCloudRecords;
- (void)_loadCloudData;
- (id)_recordForSection:(long long)arg1;
- (id)_recordNameForSection:(long long)arg1;
- (id)_cellWithTitleText:(id)arg1 valueText:(id)arg2;
- (void)_callCloudRecordObjectDescriptionBlocks;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cloudRecordObjectDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (id)initWithTransaction:(id)arg1;

@end

