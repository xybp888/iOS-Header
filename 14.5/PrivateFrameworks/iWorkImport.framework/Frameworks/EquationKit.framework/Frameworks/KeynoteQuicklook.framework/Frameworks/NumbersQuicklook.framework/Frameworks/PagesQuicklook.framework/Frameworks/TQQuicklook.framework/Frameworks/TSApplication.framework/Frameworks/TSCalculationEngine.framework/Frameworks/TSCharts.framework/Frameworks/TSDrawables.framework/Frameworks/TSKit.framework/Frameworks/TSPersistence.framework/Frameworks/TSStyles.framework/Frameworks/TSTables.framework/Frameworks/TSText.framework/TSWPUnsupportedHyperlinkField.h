//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPPlaceholderSmartField.h>

@class NSString;

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField
{
    NSString *_href;
    NSString *_hrefOriginal;
}

+ (Class)classForUnarchiver:(id)arg1;
- (void).cxx_destruct;
- (unsigned short)smartFieldKind;
- (_Bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initFromSmartField:(id)arg1 href:(id)arg2 hrefOriginal:(id)arg3;
@property(copy, nonatomic) NSString *hrefOriginal;
@property(copy, nonatomic) NSString *href;

@end

