//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet
{
}

+ (id)showSmsMessageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showSmsMessage;
@property(retain, nonatomic) SASmsSms *sms;
@property(nonatomic) _Bool showAsDraft;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

