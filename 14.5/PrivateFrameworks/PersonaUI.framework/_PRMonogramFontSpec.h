//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PRMonogramFontSpec : NSObject
{
    NSString *_fontName;
    double _baseSize;
    double _tracking;
}

+ (id)specForFontWithName:(id)arg1 baseSize:(double)arg2 tracking:(double)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) double tracking; // @synthesize tracking=_tracking;
@property(readonly, nonatomic) double baseSize; // @synthesize baseSize=_baseSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;

@end

