//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface FamilyMember : NSObject
{
    _Bool _currentSignedInUser;
    _Bool _askToBuyEnabled;
    _Bool _sharingPurchases;
    NSString *_firstName;
    NSNumber *_iCloudDSID;
    NSString *_iCloudUsername;
    NSNumber *_iTunesDSID;
    NSString *_iTunesUsername;
    NSString *_lastName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSharingPurchases) _Bool sharingPurchases; // @synthesize sharingPurchases=_sharingPurchases;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(readonly, nonatomic) NSNumber *iTunesDSID; // @synthesize iTunesDSID=_iTunesDSID;
@property(readonly, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(readonly, nonatomic) NSNumber *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic, getter=isAskToBuyEnabled) _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property(nonatomic, getter=isCurrentSignedInUser) _Bool currentSignedInUser; // @synthesize currentSignedInUser=_currentSignedInUser;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

