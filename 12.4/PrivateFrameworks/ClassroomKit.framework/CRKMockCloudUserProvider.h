//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCloudUserProvider-Protocol.h>

@class CRKCloudUser, NSString;

@interface CRKMockCloudUserProvider : NSObject <CRKCloudUserProvider>
{
    CRKCloudUser *_cloudUser;
}

+ (id)providerWithUser:(id)arg1;
@property(retain, nonatomic) CRKCloudUser *cloudUser; // @synthesize cloudUser=_cloudUser;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

