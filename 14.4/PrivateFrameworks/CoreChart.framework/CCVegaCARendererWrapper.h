//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaCARendererJSExport-Protocol.h>

@class CCVegaCARenderer, NSString;

@interface CCVegaCARendererWrapper : NSObject <CCVegaCARendererJSExport>
{
    CCVegaCARenderer *_renderer;
}

- (void).cxx_destruct;
@property __weak CCVegaCARenderer *renderer; // @synthesize renderer=_renderer;
@property(retain) NSString *backgroundColor;
- (void)render:(id)arg1;
- (void)dirtyAll;
- (void)dirty;
- (void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4;
- (id)initWithRenderer:(id)arg1;

@end

