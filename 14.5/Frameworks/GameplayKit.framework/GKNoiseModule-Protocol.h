//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/NSObject-Protocol.h>

@protocol GKNoiseModule;

@protocol GKNoiseModule <NSObject>
- (id <GKNoiseModule>)cloneModule;
- (void)setInputModule:(id <GKNoiseModule>)arg1 atIndex:(int)arg2;
- (id <GKNoiseModule>)inputModuleAtIndex:(int)arg1;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
@end

