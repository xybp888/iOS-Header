//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAMPCollection.h>

@class NSArray, NSNumber, NSString;

@interface SAMPPodcastCollection : SAMPCollection
{
}

+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)podcastCollection;
@property(copy, nonatomic) NSNumber *subscribed;
@property(copy, nonatomic) NSString *sortArtist;
@property(copy, nonatomic) NSArray *preferredPlayOrder;
@property(copy, nonatomic) NSString *artist;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

