//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSSet, NSString;

@protocol TRITaskQueueControlling
- (_Bool)enumerateTasksWithTagsIntersectingTagSet:(NSSet *)arg1 block:(void (^)(TRITaskRecord *, _Bool *))arg2;
- (_Bool)cancelTasksWithTag:(NSString *)arg1 excludingTasks:(NSArray *)arg2;
- (_Bool)cancelTasksWithTag:(NSString *)arg1;
@end

