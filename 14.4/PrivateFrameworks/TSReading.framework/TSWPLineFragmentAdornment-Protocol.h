//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@protocol TSWPLineFragmentAdornment <NSObject>
@property(readonly, nonatomic) _Bool isBackground;
- (void)drawAdornmentForFragment:(const struct TSWPLineFragment *)arg1 inContext:(struct CGContext *)arg2 withFlags:(unsigned int)arg3 state:(const struct TSWPDrawingState *)arg4 bounds:(struct CGRect)arg5;
@end

