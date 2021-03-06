//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADAccountAccessHandler-Protocol.h>

@class NSSet;
@protocol CADCalCalendarInfoProvider, CADCalStoreInfoProvider, OS_dispatch_queue;

@interface CADBlacklistedDelegateAccountAccessHandler : NSObject <CADAccountAccessHandler>
{
    id <CADCalStoreInfoProvider> _calStoreInfoProvider;
    id <CADCalCalendarInfoProvider> _calCalendarInfoProvider;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSSet *_cachedDelegateCalStoreInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *cachedDelegateCalStoreInfos; // @synthesize cachedDelegateCalStoreInfos=_cachedDelegateCalStoreInfos;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(readonly, nonatomic) id <CADCalCalendarInfoProvider> calCalendarInfoProvider; // @synthesize calCalendarInfoProvider=_calCalendarInfoProvider;
@property(readonly, nonatomic) id <CADCalStoreInfoProvider> calStoreInfoProvider; // @synthesize calStoreInfoProvider=_calStoreInfoProvider;
- (id)_delegateCalStoreInfos;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (_Bool)isAccountManaged:(id)arg1;
- (id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2;

@end

