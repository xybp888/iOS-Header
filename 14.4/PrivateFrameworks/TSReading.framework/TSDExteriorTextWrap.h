//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>

@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _isHTMLWrap;
    int _type;
    int _direction;
    int _fitType;
    double _margin;
    double _alphaThreshold;
}

+ (id)exteriorTextWrapWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
+ (id)exteriorTextWrap;
@property(readonly, nonatomic) double alphaThreshold; // @synthesize alphaThreshold=_alphaThreshold;
@property(readonly, nonatomic) double margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) int fitType; // @synthesize fitType=_fitType;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isHTMLWrap; // @synthesize isHTMLWrap=_isHTMLWrap;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
- (id)init;

@end

