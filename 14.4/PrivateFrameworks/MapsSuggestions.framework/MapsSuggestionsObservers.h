//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSHashTable, NSString;

@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject>
{
    NSString *_name;
    struct Queue _callbackQueue;
    NSHashTable *_innerObservers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *uniqueName;
- (_Bool)synchronouslyCallBlock:(CDUnknownBlockType)arg1;
- (_Bool)callBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (void)removeObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithCallbackQueue:(id)arg1 name:(id)arg2;
- (id)initWithCallbackQueue:(id)arg1 name:(id)arg2 strong:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

