//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWSessionManager-Protocol.h>

@class NSString;
@protocol SWLogger, SWScriptsManager, SWSession;

@interface SWSessionManager : NSObject <SWSessionManager>
{
    id <SWSession> _session;
    id <SWScriptsManager> _scriptsManager;
    id <SWLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SWScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
@property(readonly, nonatomic) id <SWSession> session; // @synthesize session=_session;
- (void)refresh;
- (id)initWithScriptsManager:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

