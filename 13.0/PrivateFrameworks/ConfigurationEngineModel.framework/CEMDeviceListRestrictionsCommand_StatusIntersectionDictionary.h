//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary : CEMPayloadBase
{
    NSDictionary *_statusANY;
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSDictionary *statusANY; // @synthesize statusANY=_statusANY;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

