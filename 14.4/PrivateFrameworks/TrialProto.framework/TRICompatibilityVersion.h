//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIFactorLevels;

@interface TRICompatibilityVersion : TRIPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TRIFactorLevels *control; // @dynamic control;
@property(retain, nonatomic) TRIFactorLevels *defaultFactorLevels; // @dynamic defaultFactorLevels;
@property(nonatomic) _Bool hasControl; // @dynamic hasControl;
@property(nonatomic) _Bool hasDefaultFactorLevels; // @dynamic hasDefaultFactorLevels;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) unsigned int id_p; // @dynamic id_p;

@end

