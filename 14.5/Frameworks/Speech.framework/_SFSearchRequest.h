//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _SFSearchRequest : NSObject
{
    long long _searchTypes;
    NSDictionary *_headerFields;
    NSDictionary *_queryParameters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(nonatomic) long long searchTypes; // @synthesize searchTypes=_searchTypes;

@end

