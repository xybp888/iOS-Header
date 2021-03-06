//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleContentSizeManager-Protocol.h>

@class FCTagSettings, NSString;

@interface NUArticleContentSizeManager : NSObject <NUArticleContentSizeManager>
{
    FCTagSettings *_tagSettings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (long long)textSizeForContentSizeCategory:(id)arg1;
- (id)contentSizeCategoryForSize:(long long)arg1;
- (void)updateContentScale:(long long)arg1 forArticle:(id)arg2;
- (long long)contentScaleForArticle:(id)arg1;
- (void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2;
- (id)contentSizeCategoryForArticle:(id)arg1;
- (id)initWithTagSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

