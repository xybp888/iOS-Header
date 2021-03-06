//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItemCollection, NSArray, SUScriptMediaItem;

@interface SUScriptMediaItemCollection : SUScriptObject
{
    NSArray *_items;
    SUScriptMediaItem *_representativeItem;
    _Bool _watchingLibrary;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_beginWatchingLibraryIfNecessary;
- (void)_libraryChangedNotification:(id)arg1;
@property(readonly) SUScriptMediaItem *representativeItem;
@property(readonly) NSArray *mediaTypes;
@property(readonly) NSArray *items;
@property(readonly) long long count;
- (id)_className;
@property(readonly, nonatomic) MPMediaItemCollection *nativeCollection;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

@end

