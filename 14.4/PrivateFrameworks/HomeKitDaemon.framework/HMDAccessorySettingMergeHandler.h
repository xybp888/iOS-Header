//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDAccessorySettingMergeHandler : NSObject
{
}

+ (id)_mergeValidValueConstraintsFirst:(id)arg1 second:(id)arg2;
+ (_Bool)_extractMinMaxStep:(id)arg1 minConstraint:(id *)arg2 maxConstraint:(id *)arg3 stepConstraint:(id *)arg4 first:(id)arg5;
+ (id)_mergeRangeConstraintsFirst:(id)arg1 second:(id)arg2 shouldAddMissing:(_Bool)arg3;
+ (_Bool)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4;
+ (id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4;
+ (_Bool)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3 shouldAddMissing:(_Bool)arg4;

@end

