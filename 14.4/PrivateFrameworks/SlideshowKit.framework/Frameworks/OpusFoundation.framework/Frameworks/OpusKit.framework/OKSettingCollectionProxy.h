//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSString;

@interface OKSettingCollectionProxy : NSObject <OKSettingsSupport>
{
    id _listOfObjects;
    CDUnknownBlockType _keyResolverBlock;
    NSString *_keyPath;
}

+ (id)supportedSettings;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithObjects:(id)arg1 withKeyPath:(id)arg2;
- (id)initWithObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

