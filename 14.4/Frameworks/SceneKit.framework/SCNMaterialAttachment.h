//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCNMaterialAttachment : NSObject
{
    unsigned int glID;
    unsigned int target;
    void *context;
    struct CGSize size;
    NSDictionary *options;
}

+ (id)materialAttachmentWithGLKTextureInfo:(id)arg1;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) void *context; // @synthesize context;
@property(nonatomic) unsigned int target; // @synthesize target;
@property(nonatomic) unsigned int glID; // @synthesize glID;
- (void)dealloc;

@end

