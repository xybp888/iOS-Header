//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject
{
    NSString *_prompt;
    NSString *_actionIdentifier;
    NSString *_parameterKey;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *parameterKey; // @synthesize parameterKey=_parameterKey;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (id)initWithPrompt:(id)arg1 actionIdentifier:(id)arg2 parameterKey:(id)arg3;

@end

