//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand
{
}

+ (id)estimateTTSRequestDurationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)estimateTTSRequestDuration;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *texts;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *gender;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

