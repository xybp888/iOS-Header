//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSNumber, NSString;

@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest
{
    NSNumber *_memberDSID;
    NSString *_memberEmail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *memberEmail; // @synthesize memberEmail=_memberEmail;
@property(copy, nonatomic) NSNumber *memberDSID; // @synthesize memberDSID=_memberDSID;
- (void)URLRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queryString;
- (id)_endpoint;
- (_Bool)isUserInitiated;

@end

