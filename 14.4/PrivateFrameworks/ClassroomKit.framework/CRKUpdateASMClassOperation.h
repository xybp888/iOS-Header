//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

@class CRKASMCourseUpdateProperties, NSString;
@protocol CRKClassKitRosterRequirements;

@interface CRKUpdateASMClassOperation : CATOperation
{
    NSString *_objectID;
    CRKASMCourseUpdateProperties *_properties;
    id <CRKClassKitRosterRequirements> _requirements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKClassKitRosterRequirements> requirements; // @synthesize requirements=_requirements;
@property(readonly, copy, nonatomic) CRKASMCourseUpdateProperties *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (id)classWithObjectID:(id)arg1 inClasses:(id)arg2;
- (id)makePropertyApplicator;
- (void)saveClass:(id)arg1;
- (void)applyPropertiesToClass:(id)arg1;
- (void)didFetchClasses:(id)arg1 error:(id)arg2;
- (void)fetchClasses;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithObjectID:(id)arg1 properties:(id)arg2 requirements:(id)arg3;

@end

