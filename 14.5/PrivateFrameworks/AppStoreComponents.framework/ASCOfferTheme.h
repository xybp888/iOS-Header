//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class UIColor;

@interface ASCOfferTheme : NSObject <NSSecureCoding, NSCopying>
{
    UIColor *_titleBackgroundColor;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    UIColor *_iconTintColor;
    UIColor *_progressColor;
}

+ (_Bool)supportsSecureCoding;
+ (id)adTheme;
+ (id)confirmationForTheme:(id)arg1;
+ (id)loadingTheme;
+ (id)blueTheme;
+ (id)grayTheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(readonly, nonatomic) UIColor *iconTintColor; // @synthesize iconTintColor=_iconTintColor;
@property(readonly, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(readonly, nonatomic) UIColor *titleBackgroundColor; // @synthesize titleBackgroundColor=_titleBackgroundColor;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5;

@end

