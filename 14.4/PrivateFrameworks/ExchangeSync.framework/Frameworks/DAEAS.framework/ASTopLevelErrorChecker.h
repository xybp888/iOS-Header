//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/ASParsingNotifyOfUnknownTokens-Protocol.h>

@class NSDictionary, NSNumber;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens>
{
    NSNumber *_foundStatus;
    NSDictionary *_parseRules;
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *parseRules; // @synthesize parseRules=_parseRules;
@property(retain, nonatomic) NSNumber *foundStatus; // @synthesize foundStatus=_foundStatus;
- (void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2;
- (id)asParseRules;
- (id)initWithCodePage:(int)arg1 statusToken:(int)arg2;

@end

