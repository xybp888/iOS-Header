//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject
{
    _Bool _disabled;
    UIColor *_color;
    double _offset;
    unsigned long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (unsigned long long)hash;
- (_Bool)isEqualToIndicatorInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithOffset:(double)arg1 color:(id)arg2 style:(unsigned long long)arg3;

@end

