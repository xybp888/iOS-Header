//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage
{
    NSString *_dsid;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

