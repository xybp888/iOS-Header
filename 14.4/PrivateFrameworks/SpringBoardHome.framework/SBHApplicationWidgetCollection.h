//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString, SBLeafIcon;

@interface SBHApplicationWidgetCollection : NSObject <BSDescriptionProviding>
{
    SBLeafIcon *_icon;
    NSArray *_avocadoDescriptors;
    NSString *_vendorName;
    NSString *_containerName;
    NSString *_iconImageApplicationBundleIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *iconImageApplicationBundleIdentifier; // @synthesize iconImageApplicationBundleIdentifier=_iconImageApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(retain, nonatomic) NSArray *avocadoDescriptors; // @synthesize avocadoDescriptors=_avocadoDescriptors;
@property(readonly, nonatomic) SBLeafIcon *icon; // @synthesize icon=_icon;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, copy) NSString *description;
- (id)initWithIcon:(id)arg1 galleryItems:(id)arg2 vendorName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

