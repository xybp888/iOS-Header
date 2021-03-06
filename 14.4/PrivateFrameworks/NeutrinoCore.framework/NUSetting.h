//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUModel.h>

@interface NUSetting : NUModel
{
}

+ (id)deserializeSettingsFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)deserializeAttributesFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
- (_Bool)serializeAttributesIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)copy:(id)arg1;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (id)description;
@property(readonly, nonatomic) _Bool isRequired;
@property(readonly) id defaultValue;

@end

