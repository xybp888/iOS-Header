//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASStartSpeechDictation.h>

@class NSArray, NSDictionary;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation
{
}

+ (id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startVoiceSearchRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *searchTypes;
@property(copy, nonatomic) NSDictionary *queryParameters;
@property(copy, nonatomic) NSDictionary *headers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

