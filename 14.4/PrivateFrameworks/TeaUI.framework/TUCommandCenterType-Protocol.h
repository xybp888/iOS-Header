//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TUCommandType;

@protocol TUCommandCenterType
- (long long)stateForCommand:(id <TUCommandType>)arg1;
- (void)removeContextProvider:(id)arg1 forCommand:(id <TUCommandType>)arg2;
- (void)removeContextProvider:(id)arg1;
- (void)addContextProvider:(id)arg1 forCommand:(id <TUCommandType>)arg2 completion:(void (^)(NSObject *))arg3;
- (_Bool)canExecuteCommand:(id <TUCommandType>)arg1;
- (void)executeCommand:(id <TUCommandType>)arg1;
@end

