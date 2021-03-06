//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDApplication.h"

#import "NDSpringBoardAppObserver-Protocol.h"

@class NSString;

@interface NDSpringBoardApplication : NDApplication <NDSpringBoardAppObserver>
{
    NDSpringBoardApplication *_containingApplication;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NDSpringBoardApplication *containingApplication; // @synthesize containingApplication=_containingApplication;
- (void)applicationNoLongerInForeground:(id)arg1;
- (void)applicationEnteredForeground:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isForeground;
- (_Bool)hasForegroundBackgroundStates;
- (id)initWithOperationID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

