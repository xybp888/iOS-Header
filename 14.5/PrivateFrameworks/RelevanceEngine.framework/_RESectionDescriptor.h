//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _RESectionDescriptor : NSObject
{
    _Bool _invertRanking;
    _Bool _allowsSubsections;
    NSString *_name;
    long long _maxElementCount;
    NSArray *_rules;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowsSubsections; // @synthesize allowsSubsections=_allowsSubsections;
@property(copy, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(nonatomic) long long maxElementCount; // @synthesize maxElementCount=_maxElementCount;
@property(readonly, nonatomic) _Bool invertRanking; // @synthesize invertRanking=_invertRanking;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithHistoricSectionDescriptor:(id)arg1;
- (id)initWithSectionDescriptor:(id)arg1;

@end

