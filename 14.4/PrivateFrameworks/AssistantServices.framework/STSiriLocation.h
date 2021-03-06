//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFTranscriptionType-Protocol.h>

@class NSData, NSString, NSURL;

@interface STSiriLocation : NSObject <AFTranscriptionType>
{
    NSURL *_addressBookID;
    NSString *_addressLabel;
    NSString *_contactName;
    NSData *_geoResult;
    long long _resultType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(copy, nonatomic) NSData *geoResult; // @synthesize geoResult=_geoResult;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(copy, nonatomic) NSURL *addressBookID; // @synthesize addressBookID=_addressBookID;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

