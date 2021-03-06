//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerUICore/DOCThumbnail-Protocol.h>

@class DOCThumbnailRequest, NSString, UIImage;

@interface DOCIconPromise : NSObject <DOCThumbnail>
{
    UIImage *_icon;
    DOCThumbnailRequest *_request;
}

- (void).cxx_destruct;
- (id)averageColorInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (_Bool)registerGenerationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleUpdateIfNeeded;
@property(readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) UIImage *thumbnail;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

