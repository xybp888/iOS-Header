//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SUPolicy.h"

@class SUInstallOptions;

@interface SUPolicyApply : SUPolicy
{
    SUInstallOptions *_installOptions;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) SUInstallOptions *installOptions;
@property(readonly, nonatomic) int cacheDeleteUrgency;
@property(readonly, nonatomic) _Bool checkAvailableSpace;
- (id)initWithInstallOptions:(id)arg1;

@end

