//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AnchoredValuePair : NSObject
{
    _Bool _layoutShift;
    double _value;
    double _size;
}

+ (id)pairWithValue:(double)arg1 size:(double)arg2 layoutShift:(_Bool)arg3;
@property(nonatomic) _Bool layoutShift; // @synthesize layoutShift=_layoutShift;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double value; // @synthesize value=_value;
- (id)description;
- (id)initWithValue:(double)arg1 size:(double)arg2 layoutShift:(_Bool)arg3;

@end

