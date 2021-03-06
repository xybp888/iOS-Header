//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/MCKeyboardInput.h>

@class NSArray, NSString;

@interface MCTypeInput : MCKeyboardInput
{
    NSString *_characters;
    NSArray *_nearbyKeys;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *nearbyKeys; // @synthesize nearbyKeys=_nearbyKeys;
@property(readonly, copy, nonatomic) NSString *characters; // @synthesize characters=_characters;
- (_Bool)canComposeNew:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2;

@end

