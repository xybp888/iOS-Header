//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKUITextAndHeaderItem, NSArray, NSDate, NSDictionary, NSString;

@interface EKUIEventNotificationRepresentation : NSObject
{
    _Bool _allDay;
    unsigned long long _type;
    EKUITextAndHeaderItem *_titleItem;
    EKUITextAndHeaderItem *_subtitleItem;
    NSArray *_supplementaryItems;
    NSDictionary *_userActivityUserInfo;
    NSDate *_date;
    NSDate *_endDate;
    NSString *_sourceIdentifier;
    NSString *_externalURLString;
    NSArray *_potentialConflictDates;
    NSString *_notes;
    NSDictionary *_organizerContactDictionary;
}

+ (id)previewForNotes:(id)arg1;
+ (id)timeToLeaveNotificationRepresentationWithHypothesisMessage:(id)arg1 event:(id)arg2 date:(id)arg3 displayTimeZone:(id)arg4;
+ (id)resourceChangeNotificationWithNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
+ (id)responseNotificationWithTitle:(id)arg1 message:(id)arg2;
+ (_Bool)_invitationNotificationHasResourceChanges:(id)arg1 changesString:(id *)arg2;
+ (id)_fromLocalizedString;
+ (id)_whereLocalizedString;
+ (id)_whenLocalizedString;
+ (id)_invitationUpdatedTitleLocalizedString;
+ (id)invitationNotificationRepresentationWithNotification:(id)arg1 event:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
+ (id)upcomingEventNotificationRepresentationWithEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3;
+ (id)defaultEventNotificationRepresentationWithTitle:(id)arg1 message:(id)arg2 notes:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *organizerContactDictionary; // @synthesize organizerContactDictionary=_organizerContactDictionary;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSArray *potentialConflictDates; // @synthesize potentialConflictDates=_potentialConflictDates;
@property(retain, nonatomic) NSString *externalURLString; // @synthesize externalURLString=_externalURLString;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDictionary *userActivityUserInfo; // @synthesize userActivityUserInfo=_userActivityUserInfo;
@property(retain, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(retain, nonatomic) EKUITextAndHeaderItem *subtitleItem; // @synthesize subtitleItem=_subtitleItem;
@property(retain, nonatomic) EKUITextAndHeaderItem *titleItem; // @synthesize titleItem=_titleItem;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (void)_setOwnerForContactDictionary:(id)arg1;
- (void)setOrganizerForContactDictionary:(id)arg1;
- (id)dictionaryRepresentationsOfSupplementaryItems;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (void)updateUpcomingEventNotificationWithHypothesisMessage:(id)arg1;

@end

