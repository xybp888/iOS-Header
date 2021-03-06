//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/NSCopying-Protocol.h>

@interface MPSGraphPooling2DOpDescriptor : NSObject <NSCopying>
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInX;
    unsigned long long _strideInY;
    unsigned long long _dilationRateInX;
    unsigned long long _dilationRateInY;
    unsigned long long _paddingLeft;
    unsigned long long _paddingRight;
    unsigned long long _paddingTop;
    unsigned long long _paddingBottom;
    unsigned long long _paddingStyle;
    unsigned long long _dataLayout;
}

+ (id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInX:(unsigned long long)arg3 strideInY:(unsigned long long)arg4 paddingStyle:(unsigned long long)arg5 dataLayout:(unsigned long long)arg6;
+ (id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInX:(unsigned long long)arg3 strideInY:(unsigned long long)arg4 dilationRateInX:(unsigned long long)arg5 dilationRateInY:(unsigned long long)arg6 paddingLeft:(unsigned long long)arg7 paddingRight:(unsigned long long)arg8 paddingTop:(unsigned long long)arg9 paddingBottom:(unsigned long long)arg10 paddingStyle:(unsigned long long)arg11 dataLayout:(unsigned long long)arg12;
@property(nonatomic) unsigned long long dataLayout; // @synthesize dataLayout=_dataLayout;
@property(nonatomic) unsigned long long paddingStyle; // @synthesize paddingStyle=_paddingStyle;
@property(nonatomic) unsigned long long paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) unsigned long long paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) unsigned long long paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) unsigned long long paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) unsigned long long dilationRateInY; // @synthesize dilationRateInY=_dilationRateInY;
@property(nonatomic) unsigned long long dilationRateInX; // @synthesize dilationRateInX=_dilationRateInX;
@property(nonatomic) unsigned long long strideInY; // @synthesize strideInY=_strideInY;
@property(nonatomic) unsigned long long strideInX; // @synthesize strideInX=_strideInX;
@property(nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)arg1 paddingRight:(unsigned long long)arg2 paddingTop:(unsigned long long)arg3 paddingBottom:(unsigned long long)arg4;

@end

