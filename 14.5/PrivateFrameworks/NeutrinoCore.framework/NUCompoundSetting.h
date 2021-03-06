//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@class NSDictionary;

@interface NUCompoundSetting : NUSetting
{
    NSDictionary *_properties;
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
- (void).cxx_destruct;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)modelForProperty:(id)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)copy:(id)arg1;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (id)description;
- (id)initWithProperties:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

