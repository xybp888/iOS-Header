//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ECRawMessageHeaders : NSObject
{
    NSMutableDictionary *_headers;
    NSMutableArray *_orderedHeaders;
}

- (void).cxx_destruct;
- (id)firstHeaderForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)allHeaderKeys;
- (id)allHeaders;
- (id)initWithHeaderString:(id)arg1;

@end

