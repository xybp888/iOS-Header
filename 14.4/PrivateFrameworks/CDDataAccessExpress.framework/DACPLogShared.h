//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DACPLogShared : NSObject
{
    NSMutableDictionary *_UUIDToFileMap;
}

+ (id)shared;
- (void).cxx_destruct;
- (_Bool)_slurpToFileUUID:(id)arg1 slurpeeFileDescriptor:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 startNewFile:(_Bool)arg5 sizeCheck:(long long)arg6 wantsCompressed:(_Bool)arg7 maxLogFileCount:(int)arg8 outDidCreateNewFile:(_Bool *)arg9 outNewFilePath:(id *)arg10;
- (_Bool)_logData:(id)arg1 UUID:(id)arg2 startNewFile:(_Bool)arg3 sizeCheck:(long long)arg4 wantsCompressed:(_Bool)arg5 maxFileCount:(long long)arg6 outDidCreateNewFile:(_Bool *)arg7 outNewFilePath:(id *)arg8;
- (id)_getUUIDForFolder:(id)arg1 baseName:(id)arg2;
- (_Bool)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id *)arg3;
- (id)init;

@end

