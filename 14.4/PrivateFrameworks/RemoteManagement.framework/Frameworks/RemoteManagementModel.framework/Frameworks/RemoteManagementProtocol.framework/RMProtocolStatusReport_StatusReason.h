//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolStatusReport_StatusReason : RMModelPayloadBase
{
    NSString *_reportCode;
    NSString *_reportDescription;
    RMModelAnyPayload *_reportDetails;
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;
+ (id)allowedReportKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) RMModelAnyPayload *reportDetails; // @synthesize reportDetails=_reportDetails;
@property(copy, nonatomic) NSString *reportDescription; // @synthesize reportDescription=_reportDescription;
@property(copy, nonatomic) NSString *reportCode; // @synthesize reportCode=_reportCode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

