//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDTCell.h>

@class GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDTTextCell : GQDTCell
{
    struct __CFString *mStringValue;
    GQDWPLayoutStorage *mLayoutStorage;
}

- (id)layoutStorage;
- (struct __CFString *)stringValue;
- (void)dealloc;
- (int)readContentForTCell:(struct _xmlTextReader *)arg1;
- (int)readContentForTextCell:(struct _xmlTextReader *)arg1;

@end

