//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADCapService;

@interface ADParameterFactory : NSObject
{
    ADCapService *_capService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ADCapService *capService; // @synthesize capService=_capService;
- (id)toroClickCountDataParameter;
- (id)frequencyCapDataParameter;
- (id)requestedTemplateTypeParameter;
- (id)requestedAdDataParameter;
- (id)privacyDataKeyParameter;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)arg1;
- (id)init;

@end

