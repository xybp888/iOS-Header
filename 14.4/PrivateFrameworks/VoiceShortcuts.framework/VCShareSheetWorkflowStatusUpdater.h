//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/WFDatabaseObjectObserver-Protocol.h>

@class NSUserDefaults;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCShareSheetWorkflowStatusUpdater : NSObject <WFDatabaseObjectObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    id <VCDatabaseProvider> _databaseProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)queue_updateFromDatabase:(id)arg1;
- (void)queue_setShareSheetShortcutsPresent:(_Bool)arg1;
- (void)queue_startIfPossible;
- (void)startIfPossible;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;

@end

