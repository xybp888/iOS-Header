//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TSPDocumentRevision;

@interface TSKViewState : TSPObject
{
    TSPObject *_viewStateRoot;
    TSPDocumentRevision *_documentRevision;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TSPDocumentRevision *documentRevision; // @synthesize documentRevision=_documentRevision;
@property(retain, nonatomic) TSPObject *viewStateRoot; // @synthesize viewStateRoot=_viewStateRoot;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (id)initWithContext:(id)arg1 viewStateRoot:(id)arg2;

@end

