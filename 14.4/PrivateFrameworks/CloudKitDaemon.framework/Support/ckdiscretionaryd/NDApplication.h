//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;
    NSMutableArray *_observers;
}

+ (id)cloudContainerWithIdentifier:(id)arg1;
+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;
+ (id)applicationWithIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)invokeSelectorForAllObservers:(SEL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isForeground;
- (_Bool)hasForegroundBackgroundStates;
- (id)initWithOperationID:(id)arg1;

@end

