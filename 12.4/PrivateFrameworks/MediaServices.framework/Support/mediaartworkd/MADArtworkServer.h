//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSVArtworkServiceInterface-Protocol.h"

@class NSOperationQueue, NSString;

@interface MADArtworkServer : NSObject <MSVArtworkServiceInterface>
{
    NSOperationQueue *_artworkServiceQueue;
}

@property(retain, nonatomic) NSOperationQueue *artworkServiceQueue; // @synthesize artworkServiceQueue=_artworkServiceQueue;
- (void).cxx_destruct;
- (void)processArtworkRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

