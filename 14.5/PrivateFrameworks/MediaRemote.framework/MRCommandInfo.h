//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, _MRCommandInfoProtobuf;

@interface MRCommandInfo : NSObject
{
    _Bool _enabled;
    unsigned int _command;
    NSDictionary *_options;
}

+ (_Bool)isCommandActuallySupportedEvenWhenDisabled:(unsigned int)arg1;
+ (id)dataFromCommandInfos:(id)arg1;
+ (id)commandInfosFromData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned int command; // @synthesize command=_command;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSData *propertyListData;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRCommandInfoProtobuf *protobuf;
- (id)initWithPropertyListData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

