//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMonogrammer, NSDictionary;

@interface HUContactManager : NSObject
{
    NSDictionary *_cachedContactByEmails;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
    double _monogramDiameter;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) double monogramDiameter; // @synthesize monogramDiameter=_monogramDiameter;
@property(retain, nonatomic) CNMonogrammer *monogrammer; // @synthesize monogrammer=_monogrammer;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(copy, nonatomic) NSDictionary *cachedContactByEmails; // @synthesize cachedContactByEmails=_cachedContactByEmails;
- (id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2;
- (id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

