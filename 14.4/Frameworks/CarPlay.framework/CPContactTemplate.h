//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplate.h>

#import <CarPlay/CPBarButtonProviding-Protocol.h>
#import <CarPlay/CPEntityClientTemplateDelegate-Protocol.h>
#import <CarPlay/CPEntityProviding-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPBarButton, CPContact, NAFuture, NSArray, NSString;

@interface CPContactTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding>
{
    CPContact *_contact;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CPContact *contact; // @synthesize contact=_contact;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)performUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)entity;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(retain, nonatomic) CPBarButton *backButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property(readonly) Class superclass;
@property(retain, nonatomic) NAFuture *templateProviderFuture; // @dynamic templateProviderFuture;
@property(retain, nonatomic) NSArray *trailingNavigationBarButtons;

@end

