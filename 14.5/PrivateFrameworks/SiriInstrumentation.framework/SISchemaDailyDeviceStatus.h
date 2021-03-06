//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class NSData, NSString, SISchemaActiveStatus, SISchemaAggregatedMetrics, SISchemaEnabledStatus, SISchemaMultiUserState, SISchemaPersonalization;

@interface SISchemaDailyDeviceStatus : SISchemaTopLevelUnionType
{
    NSString *_siriDeviceID;
    NSString *_siriSpeechID;
    NSString *_sharedUserId;
    long long _clientDeviceSamplingTimestampMs;
    long long _assistantRecordPublishTimestampMs;
    NSString *_locale;
    NSString *_deviceType;
    NSString *_deviceOs;
    NSString *_deviceBuild;
    SISchemaEnabledStatus *_enabledStatus;
    SISchemaActiveStatus *_activeStatus;
    SISchemaPersonalization *_personalization;
    SISchemaMultiUserState *_multiUserState;
    _Bool _spokenNotificationsproxCardSeen;
    _Bool _spokenNotificationsControlCenterModuleEnabled;
    int _spokenNotificationsWhitelistSettings;
    SISchemaAggregatedMetrics *_aggregatedMetrics;
    struct {
        unsigned int clientDeviceSamplingTimestampMs:1;
        unsigned int assistantRecordPublishTimestampMs:1;
        unsigned int spokenNotificationsproxCardSeen:1;
        unsigned int spokenNotificationsControlCenterModuleEnabled:1;
        unsigned int spokenNotificationsWhitelistSettings:1;
    } _has;
    _Bool _hasSiriDeviceID;
    _Bool _hasSiriSpeechID;
    _Bool _hasSharedUserId;
    _Bool _hasLocale;
    _Bool _hasDeviceType;
    _Bool _hasDeviceOs;
    _Bool _hasDeviceBuild;
    _Bool _hasEnabledStatus;
    _Bool _hasActiveStatus;
    _Bool _hasPersonalization;
    _Bool _hasMultiUserState;
    _Bool _hasAggregatedMetrics;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAggregatedMetrics; // @synthesize hasAggregatedMetrics=_hasAggregatedMetrics;
@property(nonatomic) _Bool hasMultiUserState; // @synthesize hasMultiUserState=_hasMultiUserState;
@property(nonatomic) _Bool hasPersonalization; // @synthesize hasPersonalization=_hasPersonalization;
@property(nonatomic) _Bool hasActiveStatus; // @synthesize hasActiveStatus=_hasActiveStatus;
@property(nonatomic) _Bool hasEnabledStatus; // @synthesize hasEnabledStatus=_hasEnabledStatus;
@property(nonatomic) _Bool hasDeviceBuild; // @synthesize hasDeviceBuild=_hasDeviceBuild;
@property(nonatomic) _Bool hasDeviceOs; // @synthesize hasDeviceOs=_hasDeviceOs;
@property(nonatomic) _Bool hasDeviceType; // @synthesize hasDeviceType=_hasDeviceType;
@property(nonatomic) _Bool hasLocale; // @synthesize hasLocale=_hasLocale;
@property(nonatomic) _Bool hasSharedUserId; // @synthesize hasSharedUserId=_hasSharedUserId;
@property(nonatomic) _Bool hasSiriSpeechID; // @synthesize hasSiriSpeechID=_hasSiriSpeechID;
@property(nonatomic) _Bool hasSiriDeviceID; // @synthesize hasSiriDeviceID=_hasSiriDeviceID;
@property(retain, nonatomic) SISchemaAggregatedMetrics *aggregatedMetrics; // @synthesize aggregatedMetrics=_aggregatedMetrics;
@property(nonatomic) int spokenNotificationsWhitelistSettings; // @synthesize spokenNotificationsWhitelistSettings=_spokenNotificationsWhitelistSettings;
@property(nonatomic) _Bool spokenNotificationsControlCenterModuleEnabled; // @synthesize spokenNotificationsControlCenterModuleEnabled=_spokenNotificationsControlCenterModuleEnabled;
@property(nonatomic) _Bool spokenNotificationsproxCardSeen; // @synthesize spokenNotificationsproxCardSeen=_spokenNotificationsproxCardSeen;
@property(retain, nonatomic) SISchemaMultiUserState *multiUserState; // @synthesize multiUserState=_multiUserState;
@property(retain, nonatomic) SISchemaPersonalization *personalization; // @synthesize personalization=_personalization;
@property(retain, nonatomic) SISchemaActiveStatus *activeStatus; // @synthesize activeStatus=_activeStatus;
@property(retain, nonatomic) SISchemaEnabledStatus *enabledStatus; // @synthesize enabledStatus=_enabledStatus;
@property(copy, nonatomic) NSString *deviceBuild; // @synthesize deviceBuild=_deviceBuild;
@property(copy, nonatomic) NSString *deviceOs; // @synthesize deviceOs=_deviceOs;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) long long assistantRecordPublishTimestampMs; // @synthesize assistantRecordPublishTimestampMs=_assistantRecordPublishTimestampMs;
@property(nonatomic) long long clientDeviceSamplingTimestampMs; // @synthesize clientDeviceSamplingTimestampMs=_clientDeviceSamplingTimestampMs;
@property(copy, nonatomic) NSString *sharedUserId; // @synthesize sharedUserId=_sharedUserId;
@property(copy, nonatomic) NSString *siriSpeechID; // @synthesize siriSpeechID=_siriSpeechID;
@property(copy, nonatomic) NSString *siriDeviceID; // @synthesize siriDeviceID=_siriDeviceID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSpokenNotificationsWhitelistSettings;
@property(nonatomic) _Bool hasSpokenNotificationsControlCenterModuleEnabled;
@property(nonatomic) _Bool hasSpokenNotificationsproxCardSeen;
@property(nonatomic) _Bool hasAssistantRecordPublishTimestampMs;
@property(nonatomic) _Bool hasClientDeviceSamplingTimestampMs;
- (int)getAnyEventType;

@end

