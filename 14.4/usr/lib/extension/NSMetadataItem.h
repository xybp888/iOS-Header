//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NSMetadataItem : NSObject
{
    id _item;
    void *_reserved;
}

@property(readonly, copy) NSArray *attributes;
- (id)valuesForAttributes:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_setQuery:(id)arg1;
- (id)_item;
- (void)dealloc;
- (id)_init:(id)arg1;

@end

