//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCConferenceRoomDisplayPayload : MCPayload
{
    NSString *_customMessage;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *customMessage; // @synthesize customMessage=_customMessage;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

