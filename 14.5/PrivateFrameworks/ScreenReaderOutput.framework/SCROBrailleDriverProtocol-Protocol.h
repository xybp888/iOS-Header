//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol SCROBrailleDriverDelegate, SCROIOElementProtocol;

@protocol SCROBrailleDriverProtocol <NSObject>
- (_Bool)setStatusCells:(const char *)arg1 length:(long long)arg2;
- (_Bool)setMainCells:(const char *)arg1 length:(long long)arg2;
- (long long)statusSize;
- (long long)mainSize;
- (NSArray *)getInputEvents;
- (int)brailleInputMode;
- (_Bool)postsKeyboardEvents;
- (_Bool)isInputEnabled;
- (_Bool)supportsBlinkingCursor;
- (NSString *)modelIdentifier;
- (_Bool)isSleeping;
- (_Bool)isDriverLoaded;
- (_Bool)unloadDriver;
- (int)loadDriverWithIOElement:(id <SCROIOElementProtocol>)arg1;
- (unsigned long long)interfaceVersion;

@optional
- (void)setBrailleDriverDelegate:(id <SCROBrailleDriverDelegate>)arg1;
@end

