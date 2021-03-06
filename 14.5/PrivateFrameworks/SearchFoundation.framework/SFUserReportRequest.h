//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFUserReportRequest-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFUserReportRequest : NSObject <SFUserReportRequest, NSSecureCoding, NSCopying>
{
    NSString *_affordanceText;
    NSString *_title;
    NSString *_dismissText;
    NSArray *_userReportOptions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *userReportOptions; // @synthesize userReportOptions=_userReportOptions;
@property(copy, nonatomic) NSString *dismissText; // @synthesize dismissText=_dismissText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *affordanceText; // @synthesize affordanceText=_affordanceText;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

