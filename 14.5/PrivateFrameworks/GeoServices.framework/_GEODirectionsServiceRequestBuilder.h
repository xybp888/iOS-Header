//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORouteAttributes;

__attribute__((visibility("hidden")))
@interface _GEODirectionsServiceRequestBuilder : NSObject
{
    GEORouteAttributes *_builder;
    CDUnknownBlockType _block;
}

+ (id)builderFor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)buildRequest:(id)arg1 result:(CDUnknownBlockType)arg2;

@end

