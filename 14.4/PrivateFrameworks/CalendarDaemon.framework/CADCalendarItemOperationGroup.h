//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADCalendarItemInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseExportCalendarItemAsICS:(id)arg1 withOptions:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (id)_resultsFilteredForJunkEvents:(id)arg1;
- (id)_resultsFilteredForTCCAccess:(id)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

