//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sleep/HKSPChange.h>

@protocol HKSPMutableObject, HKSPObject;

@interface HKSPRelationshipChange : HKSPChange
{
}

@property(readonly, nonatomic) _Bool isRemove;
@property(readonly, nonatomic) _Bool isUpdate;
@property(readonly, nonatomic) _Bool isAdd;
- (id)initWithProperty:(id)arg1 changedObject:(id)arg2 originalObject:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) id <HKSPMutableObject> changedValue; // @dynamic changedValue;
@property(readonly, nonatomic) id <HKSPObject> originalValue; // @dynamic originalValue;

@end

