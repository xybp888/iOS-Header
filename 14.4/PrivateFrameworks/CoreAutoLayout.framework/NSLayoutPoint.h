//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAutoLayout/NSCoding-Protocol.h>
#import <CoreAutoLayout/NSCopying-Protocol.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding>
{
    NSLayoutXAxisAnchor *_xAxisAnchor;
    NSLayoutYAxisAnchor *_yAxisAnchor;
}

+ (id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
+ (id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
@property(readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor; // @synthesize yAxisAnchor=_yAxisAnchor;
@property(readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor; // @synthesize xAxisAnchor=_xAxisAnchor;
- (id)constraintsEqualToPoint:(id)arg1;
- (id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)constraintsEqualToLayoutPoint:(id)arg1;
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ruleEqualToLayoutPoint:(id)arg1;
- (struct CGPoint)valueInItem:(id)arg1;

@end

