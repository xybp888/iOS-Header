//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations : RMModelPayloadBase
{
    NSArray *_statusActivations;
    NSArray *_statusAssets;
    NSArray *_statusConfigurations;
}

+ (id)buildRequiredOnly;
+ (id)buildWithActivations:(id)arg1 assets:(id)arg2 configurations:(id)arg3;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *statusConfigurations; // @synthesize statusConfigurations=_statusConfigurations;
@property(copy, nonatomic) NSArray *statusAssets; // @synthesize statusAssets=_statusAssets;
@property(copy, nonatomic) NSArray *statusActivations; // @synthesize statusActivations=_statusActivations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

