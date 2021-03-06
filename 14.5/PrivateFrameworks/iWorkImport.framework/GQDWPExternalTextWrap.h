//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable>
{
    _Bool mFloatingWrapEnabled;
    _Bool mInlineWrapEnabled;
    float mMargin;
    float mAlphaThreshold;
    int mWrapStyle;
    int mWrapDirection;
    int mFloatingWrapType;
    int mAttachmentWrapType;
}

+ (const struct StateSpec *)stateForReading;
- (int)attachmentWrapType;
- (int)floatingWrapType;
- (int)wrapDirection;
- (int)wrapStyle;
- (float)alphaThreshold;
- (float)margin;
- (_Bool)inlineWrapEnabled;
- (_Bool)floatingWrapEnabled;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

