//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXSSKeyboardCommandMap, NSArray, NSMutableDictionary, NSSet, NSString;

@interface FKAAvailableCommands : NSObject
{
    NSString *_siriShortcutsDidChangeObserverToken;
    id _forceTouchEnabledDidChangeObserverToken;
    NSMutableDictionary *_tokensToUpdateBlocks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tokensToUpdateBlocks; // @synthesize tokensToUpdateBlocks=_tokensToUpdateBlocks;
@property(retain, nonatomic) id forceTouchEnabledDidChangeObserverToken; // @synthesize forceTouchEnabledDidChangeObserverToken=_forceTouchEnabledDidChangeObserverToken;
@property(retain, nonatomic) NSString *siriShortcutsDidChangeObserverToken; // @synthesize siriShortcutsDidChangeObserverToken=_siriShortcutsDidChangeObserverToken;
- (void)unregisterUpdateBlockWithToken:(id)arg1;
- (id)registerUpdateBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AXSSKeyboardCommandMap *commandMap;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSSet *commands;
- (void)dealloc;
- (id)init;

@end

