//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerActionItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_create;
    CalDAVCalendarServerUpdateItem *_update;
    CalDAVCalendarServerCancelItem *_cancel;
    CalDAVCalendarServerReplyItem *_reply;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CalDAVCalendarServerReplyItem *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) CalDAVCalendarServerCancelItem *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) CalDAVCalendarServerUpdateItem *update; // @synthesize update=_update;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *create; // @synthesize create=_create;
- (id)copyParseRules;
- (id)init;

@end

