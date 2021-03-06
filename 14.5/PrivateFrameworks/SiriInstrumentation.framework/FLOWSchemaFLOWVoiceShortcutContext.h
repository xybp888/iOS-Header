//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSArray, NSData;

@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage
{
    NSArray *_voiceShortcutActions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *voiceShortcutActions; // @synthesize voiceShortcutActions=_voiceShortcutActions;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)voiceShortcutActionAtIndex:(unsigned long long)arg1;
- (unsigned long long)voiceShortcutActionCount;
- (void)addVoiceShortcutAction:(id)arg1;
- (void)clearVoiceShortcutAction;

@end

