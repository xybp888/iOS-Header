//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRCTargetSelector : NSObject
{
    id _target;
    SEL _selector;
}

+ (id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

