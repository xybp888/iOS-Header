//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSUndoObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoLightInvocation : _NSUndoObject
{
    SEL _selector;
    id _arg;
}

- (id)description;
- (id)_argument;
- (void)dealloc;
- (void)invoke;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end

