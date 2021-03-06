//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation
{
    long long _cacheStrategy;
    _Bool _useSharedImageDecoding;
    NSURL *_animatedImageURL;
    PHAnimatedImage *_animatedImage;
}

+ (id)_requestIsolationQueue;
+ (id)_inq_animatedImageLoadingOperations;
+ (id)_animatedImageSharedLoadingQueue;
+ (id)_removeOperation:(long long)arg1;
+ (void)_registerOperation:(id)arg1 forRequestID:(long long)arg2;
+ (long long)nextRequestID;
- (void).cxx_destruct;
@property(retain) PHAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void)main;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(_Bool)arg3;

@end

