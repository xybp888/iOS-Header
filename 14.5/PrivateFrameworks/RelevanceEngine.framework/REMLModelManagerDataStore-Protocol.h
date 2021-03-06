//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString, NSURL, REMLModelManager;

@protocol REMLModelManagerDataStore <NSObject>
- (_Bool)modelManager:(REMLModelManager *)arg1 loadDataStoreFromURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)modelManager:(REMLModelManager *)arg1 saveDataStoreToURL:(NSURL *)arg2 error:(id *)arg3;
- (NSString *)dataStoreKey;
@end

