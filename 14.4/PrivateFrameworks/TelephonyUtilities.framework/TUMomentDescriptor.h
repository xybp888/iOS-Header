//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TUMomentDescriptor : NSObject <NSSecureCoding>
{
    NSString *_photosAssetIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *photosAssetIdentifier; // @synthesize photosAssetIdentifier=_photosAssetIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSURL *photoViewingAppURL;
- (id)init;
- (id)initWithPhotosAppAssetIdentifier:(id)arg1;

@end

