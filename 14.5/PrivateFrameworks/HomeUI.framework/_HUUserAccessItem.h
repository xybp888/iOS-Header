//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMUser;

@interface _HUUserAccessItem : HFItem
{
    HMUser *_user;
    CDUnknownBlockType _resultsBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUser:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;

@end

