//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface UIPencilEvent : UIEvent
{
    NSHashTable *_trackedInteractions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *trackedInteractions; // @synthesize trackedInteractions=_trackedInteractions;
- (long long)subtype;
- (long long)type;
- (void)deregisterAllInteractionsForWindow:(id)arg1;
- (void)deregisterInteraction:(id)arg1;
- (void)registerInteraction:(id)arg1;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (id)_init;

@end

