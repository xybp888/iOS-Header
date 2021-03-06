//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    ObjectIdentifier_b2f7915a _pageProxyID;
    ObjectIdentifier_8136369e _webPageID;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=_webPageID) ObjectIdentifier_8136369e webPageID; // @synthesize webPageID=_webPageID;
@property(readonly, nonatomic, getter=_pageProxyID) ObjectIdentifier_b2f7915a pageProxyID; // @synthesize pageProxyID=_pageProxyID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithPageProxyID:(ObjectIdentifier_b2f7915a)arg1 andWebPageID:(ObjectIdentifier_8136369e)arg2;
- (id)_initWithPage:(NakedRef_f43bc9c8)arg1;
- (id)_initWithPageProxy:(NakedRef_0c67ce5b)arg1;

@end

