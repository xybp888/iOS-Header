//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class ICSearchResult;
@protocol ICSearchIndexableNote;

@protocol ICNotePreviewing <NSObject>
@property(readonly, nonatomic) ICSearchResult *searchResult;
@property(readonly, nonatomic) id <ICSearchIndexableNote> note;
- (void)setupPreviewWithInitialFrame:(struct CGRect)arg1;
- (void)setupPreview;
- (id)initWithNote:(id <ICSearchIndexableNote>)arg1 searchResult:(ICSearchResult *)arg2;
- (id)initWithNote:(id <ICSearchIndexableNote>)arg1;
@end

