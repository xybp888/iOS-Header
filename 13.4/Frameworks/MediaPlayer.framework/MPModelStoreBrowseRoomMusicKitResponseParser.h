//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICUserIdentity, MPModelStoreBrowseContentItemBuilder, MPModelStoreBrowseSectionBuilder, MPSectionedCollection, NSIndexSet;

@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject
{
    long long _parseOnceToken;
    id _rawResponseOutput;
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    NSIndexSet *_filteredFCKinds;
    MPSectionedCollection *_results;
    ICUserIdentity *_userIdentity;
}

- (void).cxx_destruct;
- (id)_parsedContentNode:(id)arg1 additionalAttributesFromParent:(id)arg2;
- (id)_parsedElements:(id)arg1;
- (id)_parsedSectionedCollection;
@property(readonly, nonatomic) MPSectionedCollection *results;
- (id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5;

@end

