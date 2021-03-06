//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class NSArray, VNRecognizeDocumentElementsRequestElementConfiguration;

@interface VNRecognizeDocumentElementsRequest : VNImageBasedRequest
{
}

+ (Class)configurationClass;
- (CDUnknownBlockType)resultsSortingComparator;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
@property(readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements;
@property(readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements;
- (id)supportedIdentifiersAndReturnError:(id *)arg1;
- (id)_applicableDetectorAndOptions:(id *)arg1 loadedInSession:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end

