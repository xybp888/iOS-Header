//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBWindowHideRequest : NSObject
{
    NSString *_reason;
    struct SBWindowLevelRange_struct _windowLevelRange;
}

+ (id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct)arg1 reason:(id)arg2;
- (void).cxx_destruct;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property struct SBWindowLevelRange_struct windowLevelRange; // @synthesize windowLevelRange=_windowLevelRange;
- (id)description;

@end

