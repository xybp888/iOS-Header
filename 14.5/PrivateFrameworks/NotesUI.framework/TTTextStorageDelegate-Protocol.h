//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSTextStorageDelegate-Protocol.h>

@class NSAttributedString, NSTextStorage;

@protocol TTTextStorageDelegate <NSTextStorageDelegate>

@optional
- (void)textStorage:(NSTextStorage *)arg1 didReplace:(NSAttributedString *)arg2 with:(NSAttributedString *)arg3;
- (void)textStorageDidChange:(NSTextStorage *)arg1;
- (void)textStorageWillChange:(NSTextStorage *)arg1;
- (void)textStorageDidPerformUndo:(NSTextStorage *)arg1;
@end

