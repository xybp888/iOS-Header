//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject
{
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)nwContext;
- (id)_init;
- (id)init;

@end

