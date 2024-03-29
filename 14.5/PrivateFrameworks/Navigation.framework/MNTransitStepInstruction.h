//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction : MNTransitInstruction
{
    GEOComposedRouteStep *_step;
    NSDictionary *_overridenInstructionsMapping;
}

+ (id)instructionForStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;
+ (id)instructionForStep:(id)arg1 context:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *overridenInstructionsMapping; // @synthesize overridenInstructionsMapping=_overridenInstructionsMapping;
@property(readonly, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
- (id)instructionSet;
- (id)initWithStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;

@end

