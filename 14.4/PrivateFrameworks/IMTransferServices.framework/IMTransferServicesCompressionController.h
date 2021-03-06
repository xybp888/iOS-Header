//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject
{
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressFileTransfer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_blockForCopier:(id)arg1;
- (void)_unmapCopier:(id)arg1;
- (void)_mapCopier:(id)arg1 toBlock:(CDUnknownBlockType)arg2;

@end

