//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSAPdfTaggerContext.h>

@class TSAPdfTaggerTextColumnOwnerContext, TSWPColumn, TSWPSelection;

@interface TSAPdfTaggerTextColumnContext : TSAPdfTaggerContext
{
    struct TSWPParagraphEnumerator _paragraphEnumerator;
    TSAPdfTaggerTextColumnOwnerContext *_textColumnOwner;
    TSWPColumn *_column;
    TSWPSelection *_limitSelection;
    struct _NSRange _range;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) __weak TSWPSelection *limitSelection; // @synthesize limitSelection=_limitSelection;
@property(readonly, nonatomic) __weak TSWPColumn *column; // @synthesize column=_column;
@property(readonly, nonatomic) __weak TSAPdfTaggerTextColumnOwnerContext *textColumnOwner; // @synthesize textColumnOwner=_textColumnOwner;
- (struct TSWPParagraphEnumerator *)paragraphEnumerator;
- (id)initWithStateOfTagger:(id)arg1 column:(id)arg2 limitSelection:(id)arg3;

@end

