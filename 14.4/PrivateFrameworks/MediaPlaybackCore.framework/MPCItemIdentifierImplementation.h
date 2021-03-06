//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCItemIdentifier-Protocol.h>
#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSString;

@interface MPCItemIdentifierImplementation : NSObject <MPCItemIdentifier, NSCopying>
{
    NSString *_contentItemID;
    long long _repeatIndex;
}

+ (id)identifierForMFQueuePlayerItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long repeatIndex; // @synthesize repeatIndex=_repeatIndex;
@property(copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithContentItemID:(id)arg1 repeatIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

