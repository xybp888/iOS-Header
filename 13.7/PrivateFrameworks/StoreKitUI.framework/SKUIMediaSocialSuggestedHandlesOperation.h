//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSArray, NSLock, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    NSArray *_words;
}

- (void).cxx_destruct;
- (void)main;
@property(copy) NSArray *words;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithClientContext:(id)arg1;

@end

