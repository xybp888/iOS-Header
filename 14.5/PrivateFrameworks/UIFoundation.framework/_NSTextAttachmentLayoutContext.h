//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSTextAttachment;
@protocol NSTextLocation;

__attribute__((visibility("hidden")))
@interface _NSTextAttachmentLayoutContext : NSObject
{
    id <NSTextLocation> _location;
    NSDictionary *_attributes;
    NSTextAttachment *_textAttachment;
    struct __CTRunDelegate *_runDelegate;
    struct CGRect _bounds;
    struct CGRect _proposedLineFragment;
    _Bool _isBoundsValid;
    _Bool _isLineFragmentLayout;
}

@property(readonly) NSTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
@property(readonly, copy) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly) id <NSTextLocation> location; // @synthesize location=_location;
@property struct CGRect proposedLineFragment; // @dynamic proposedLineFragment;
@property(readonly) const struct __CTRunDelegate *runDelegate; // @dynamic runDelegate;
- (void)_queryLayout;
- (void)dealloc;
- (id)initWithLocation:(id)arg1 attributes:(id)arg2;

@end

