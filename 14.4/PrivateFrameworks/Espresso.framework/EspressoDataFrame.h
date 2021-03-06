//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface EspressoDataFrame : NSObject
{
    NSMutableDictionary *_inputAttachments;
    NSMutableDictionary *_outputAttachments;
    NSMutableDictionary *_groundTruthAttachments;
    NSString *_function_name;
}

- (void).cxx_destruct;
@property(retain) NSString *function_name; // @synthesize function_name=_function_name;
@property(retain) NSMutableDictionary *groundTruthAttachments; // @synthesize groundTruthAttachments=_groundTruthAttachments;
@property(retain) NSMutableDictionary *outputAttachments; // @synthesize outputAttachments=_outputAttachments;
@property(retain) NSMutableDictionary *inputAttachments; // @synthesize inputAttachments=_inputAttachments;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
@property(readonly) NSArray *outputAttachmentNames;
@property(readonly) NSArray *groundTruthAttachmentNames;
@property(readonly) NSArray *inputAttachmentNames;
- (id)getFunctionName;
- (id)getGroundTruthAttachment:(id)arg1;
- (id)getOutputAttachment:(id)arg1;
- (id)getInputAttachment:(id)arg1;
- (id)init;

@end

