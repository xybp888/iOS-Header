//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

@interface WBSPhishingConfigurationOverride : NSObject
{
    NSRegularExpression *_expression;
    unsigned long long _classification;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long classification; // @synthesize classification=_classification;
@property(readonly, nonatomic) NSRegularExpression *expression; // @synthesize expression=_expression;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithExpression:(id)arg1 classification:(id)arg2 error:(id *)arg3;

@end

