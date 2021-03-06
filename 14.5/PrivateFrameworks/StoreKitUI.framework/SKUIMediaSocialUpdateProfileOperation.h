//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, NSMutableDictionary, NSNumber, NSString, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSString *_entityType;
    NSNumber *_identifier;
    NSLock *_lock;
    NSMutableDictionary *_parameters;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_requestBodyWithError:(id *)arg1;
- (id)_requestWithError:(id *)arg1;
- (id)_imageDictionaryFromPhotoUpload:(id)arg1;
- (void)main;
- (void)setValue:(id)arg1 forProfileField:(id)arg2;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy) NSNumber *identifier;
@property(copy) NSString *entityType;
- (id)initWithClientContext:(id)arg1;

@end

