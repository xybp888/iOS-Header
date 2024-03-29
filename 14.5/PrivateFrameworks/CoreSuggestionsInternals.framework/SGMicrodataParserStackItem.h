//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SGMicrodataDocument;

@interface SGMicrodataParserStackItem : NSObject
{
    SGMicrodataDocument *_document;
    SGMicrodataParserStackItem *_parent;
    NSArray *_textConsumers;
    NSArray *_itemScopes;
}

- (void).cxx_destruct;
@property(readonly) NSArray *itemScopes; // @synthesize itemScopes=_itemScopes;
@property(readonly) NSArray *textConsumers; // @synthesize textConsumers=_textConsumers;
@property(readonly) SGMicrodataParserStackItem *parent; // @synthesize parent=_parent;
@property(readonly) SGMicrodataDocument *document; // @synthesize document=_document;
- (id)initWithParent:(id)arg1 item:(id)arg2 htmlId:(id)arg3 textConsumer:(id)arg4;
- (id)initWithDocument:(id)arg1;

@end

