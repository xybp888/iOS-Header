//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMFactory-Protocol.h>

@class NSString;
@protocol SXDocumentProviding;

@interface SXDOMFactory : NSObject <SXDOMFactory>
{
    id <SXDocumentProviding> _documentProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
- (id)createDOM;
- (id)initWithDocumentProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

