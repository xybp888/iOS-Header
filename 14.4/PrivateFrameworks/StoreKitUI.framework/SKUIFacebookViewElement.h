//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIFacebookViewElement : SKUIViewElement
{
    long long _facebookType;
    NSString *_urlString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *URLString; // @synthesize URLString=_urlString;
@property(readonly, nonatomic) long long facebookType; // @synthesize facebookType=_facebookType;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

