//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IconServices/ISIconManagerObserver-Protocol.h>

@class ISIcon;

@interface ISIconLayer : CALayer <ISIconManagerObserver>
{
    ISIcon *_icon;
    unsigned long long _variantOptions;
    unsigned long long _badgeOptions;
    unsigned long long _backgroundStyle;
    unsigned long long _shape;
    _Bool _shouldApplyMask;
    _Bool _drawBorder;
    unsigned long long _iconShape;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool drawBorder; // @synthesize drawBorder=_drawBorder;
@property(nonatomic) _Bool shouldApplyMask; // @synthesize shouldApplyMask=_shouldApplyMask;
@property(nonatomic) unsigned long long iconShape; // @synthesize iconShape=_iconShape;
@property(retain, nonatomic) ISIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long variantOptions; // @synthesize variantOptions=_variantOptions;
@property(nonatomic) unsigned long long badgeOptions; // @synthesize badgeOptions=_badgeOptions;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;
- (id)initWithIcon:(id)arg1;
- (id)init;

@end

