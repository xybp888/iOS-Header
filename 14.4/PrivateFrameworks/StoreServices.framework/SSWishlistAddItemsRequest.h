//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

@class NSArray, NSString;

@interface SSWishlistAddItemsRequest : SSRequest
{
    NSArray *_items;
    NSString *_caller;
    NSString *_version;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *caller; // @synthesize caller=_caller;
@property(readonly, copy) NSArray *items; // @synthesize items=_items;
- (id)_convertedValueForValue:(id)arg1;
- (id)copyQueryStringParameters;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithAddItemsResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithItems:(id)arg1 caller:(id)arg2 version:(id)arg3;
- (id)init;

@end

