//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNoteFileFormat : NSObject
{
}

+ (_Bool)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id *)arg3;
+ (void)exportNote:(id)arg1 toURL:(id)arg2;
+ (id)pathExtension;
+ (id)fileUTType;
- (void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseFileURL:(id)arg1 newNoteBlock:(CDUnknownBlockType)arg2 updatedNoteBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 completedParsingBlock:(CDUnknownBlockType)arg5;
- (void)cancelParsing;
- (_Bool)canHandleFileURL:(id)arg1;
- (id)allowedFileTypes;

@end

