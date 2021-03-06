//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>
#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _MRLanguageOptionProtobuf;

@interface MRLanguageOption : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasType;
    unsigned int _type;
    NSString *_languageTag;
    NSArray *_characteristics;
    NSString *_displayName;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)automaticLanguageOptionWithType:(unsigned int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(copy, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property(nonatomic) _Bool hasType; // @synthesize hasType=_hasType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)isAutomaticLanguageOptionWithType:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRLanguageOptionProtobuf *protobuf;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithType:(unsigned int)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;

@end

