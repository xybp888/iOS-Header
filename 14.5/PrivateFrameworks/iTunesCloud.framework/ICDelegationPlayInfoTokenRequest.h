//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying>
{
    NSNumber *_DSID;
    NSData *_cloudCredentialsTokenData;
    NSData *_SICData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *SICData; // @synthesize SICData=_SICData;
@property(copy, nonatomic) NSData *cloudCredentialsTokenData; // @synthesize cloudCredentialsTokenData=_cloudCredentialsTokenData;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;
- (id)initWithDSID:(id)arg1 SICData:(id)arg2;

@end

