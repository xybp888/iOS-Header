//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UITableViewCellReuseParameters : NSObject
{
    _Bool _didEndDisplaying;
    NSIndexPath *_indexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didEndDisplaying; // @synthesize didEndDisplaying=_didEndDisplaying;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithIndexPath:(id)arg1 didEndDisplaying:(_Bool)arg2;

@end

