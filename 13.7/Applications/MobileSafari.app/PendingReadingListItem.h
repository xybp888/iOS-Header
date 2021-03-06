//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmark;
@protocol ReadingListMetadataProvider;

@interface PendingReadingListItem : NSObject
{
    WebBookmark *_bookmark;
    id <ReadingListMetadataProvider> _provider;
}

+ (id)itemWithBookmark:(id)arg1 provider:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <ReadingListMetadataProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;

@end

