//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKCSSMediaQueryExpression : NSObject
{
    long long _type;
    NSString *_key;
    NSString *_stringValue;
    NSString *_dimension;
    NSString *_mediaType;
    double _doubleValue;
}

- (void).cxx_destruct;
@property double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *dimension; // @synthesize dimension=_dimension;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property long long type; // @synthesize type=_type;
- (id)description;
- (id)valueAsString;
- (id)expressionAsString;
- (_Bool)evaluate;

@end

