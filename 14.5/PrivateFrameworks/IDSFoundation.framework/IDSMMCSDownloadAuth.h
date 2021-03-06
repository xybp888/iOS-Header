//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface IDSMMCSDownloadAuth : NSObject <NSCopying>
{
    NSDictionary *_dictionaryRepresentation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *ownerID;
@property(readonly, nonatomic) NSString *authURL;
@property(readonly, nonatomic) NSData *signature;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSignature:(id)arg1 authURL:(id)arg2 ownerID:(id)arg3;

@end

