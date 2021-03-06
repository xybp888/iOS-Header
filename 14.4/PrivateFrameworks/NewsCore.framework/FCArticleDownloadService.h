//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCArticleDownloadServiceType-Protocol.h>

@protocol FCContentContext, FCFlintHelper;

@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType>
{
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(readonly, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (id)downloadArticleWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchCachedArticleWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2;
- (id)init;

@end

