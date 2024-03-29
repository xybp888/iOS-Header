//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryDataSource.h>

@class NSArray, VUIMediaAPIClient;

__attribute__((visibility("hidden")))
@interface VUILibraryFamilyMembersDataSource : VUILibraryDataSource
{
    NSArray *_familyMembers;
    VUIMediaAPIClient *_mediaClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIMediaAPIClient *mediaClient; // @synthesize mediaClient=_mediaClient;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
- (void)_orderFamilyMembersByFirstName;
- (void)startFetch;
- (id)init;

@end

