//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APUIActionCardViewConfig : NSObject
{
    _Bool _showThumbnailImage;
    _Bool _useAppIconAsThumbnail;
    _Bool _showActionButton;
    _Bool _showAppFootnote;
    _Bool _showAppFootnoteIcon;
    _Bool _useTinyIconVariant;
    _Bool _fallbackToCustomResponseString;
    unsigned long long _style;
    NSString *_bundleId;
    long long _maxLinesForTitle;
    long long _maxLinesForSubtitle;
    long long _maxLinesForFootnote;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fallbackToCustomResponseString; // @synthesize fallbackToCustomResponseString=_fallbackToCustomResponseString;
@property(nonatomic) long long maxLinesForFootnote; // @synthesize maxLinesForFootnote=_maxLinesForFootnote;
@property(nonatomic) long long maxLinesForSubtitle; // @synthesize maxLinesForSubtitle=_maxLinesForSubtitle;
@property(nonatomic) long long maxLinesForTitle; // @synthesize maxLinesForTitle=_maxLinesForTitle;
@property(nonatomic) _Bool useTinyIconVariant; // @synthesize useTinyIconVariant=_useTinyIconVariant;
@property(nonatomic) _Bool showAppFootnoteIcon; // @synthesize showAppFootnoteIcon=_showAppFootnoteIcon;
@property(nonatomic) _Bool showAppFootnote; // @synthesize showAppFootnote=_showAppFootnote;
@property(nonatomic) _Bool showActionButton; // @synthesize showActionButton=_showActionButton;
@property(nonatomic) _Bool useAppIconAsThumbnail; // @synthesize useAppIconAsThumbnail=_useAppIconAsThumbnail;
@property(nonatomic) _Bool showThumbnailImage; // @synthesize showThumbnailImage=_showThumbnailImage;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)init;

@end

