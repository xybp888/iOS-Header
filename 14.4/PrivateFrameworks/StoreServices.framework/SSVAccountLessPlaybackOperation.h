//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation
{
    NSString *_assetStoreFrontIdentifier;
    NSMutableDictionary *_httpHeaderFields;
    NSString *_itemIdentifier;
    CDUnknownBlockType _responseBlock;
}

- (void).cxx_destruct;
- (id)_requestBodyData;
- (void)main;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(copy, nonatomic) NSDictionary *HTTPHeaderFields; // @synthesize HTTPHeaderFields=_httpHeaderFields;
@property(copy) CDUnknownBlockType responseBlock;
@property(copy) NSString *itemIdentifier;
@property(copy, nonatomic) NSString *assetStoreFrontIdentifier;

@end

