//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>
{
    long long _operation;
    NSString *_sharedContentType;
    long long _numberOfInvitations;
    _Bool _invitationsSentViaThirdPartyService;
    _Bool _publicShare;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *sharedContentType; // @synthesize sharedContentType=_sharedContentType;
@property long long numberOfInvitations; // @synthesize numberOfInvitations=_numberOfInvitations;
@property _Bool publicShare; // @synthesize publicShare=_publicShare;
@property _Bool invitationsSentViaThirdPartyService; // @synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService;
@property long long operation; // @synthesize operation=_operation;
- (id)_variantSubstrings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

