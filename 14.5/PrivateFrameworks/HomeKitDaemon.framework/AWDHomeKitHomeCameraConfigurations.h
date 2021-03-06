//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying>
{
    unsigned int _enabledResidentsDeviceCapabilities;
    NSMutableArray *_homeKitCameraSettings;
    NSMutableArray *_homeKitCameraUserSettings;
    _Bool _isFaceClassificationEnabled;
    _Bool _isOwner;
    struct {
        unsigned int enabledResidentsDeviceCapabilities:1;
        unsigned int isFaceClassificationEnabled:1;
        unsigned int isOwner:1;
    } _has;
}

+ (Class)homeKitCameraSettingsType;
+ (Class)homeKitCameraUserSettingsType;
- (void).cxx_destruct;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) _Bool isFaceClassificationEnabled; // @synthesize isFaceClassificationEnabled=_isFaceClassificationEnabled;
@property(nonatomic) unsigned int enabledResidentsDeviceCapabilities; // @synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities;
@property(retain, nonatomic) NSMutableArray *homeKitCameraSettings; // @synthesize homeKitCameraSettings=_homeKitCameraSettings;
@property(retain, nonatomic) NSMutableArray *homeKitCameraUserSettings; // @synthesize homeKitCameraUserSettings=_homeKitCameraUserSettings;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsOwner;
@property(nonatomic) _Bool hasIsFaceClassificationEnabled;
@property(nonatomic) _Bool hasEnabledResidentsDeviceCapabilities;
- (id)homeKitCameraSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitCameraSettingsCount;
- (void)addHomeKitCameraSettings:(id)arg1;
- (void)clearHomeKitCameraSettings;
- (id)homeKitCameraUserSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitCameraUserSettingsCount;
- (void)addHomeKitCameraUserSettings:(id)arg1;
- (void)clearHomeKitCameraUserSettings;

@end

