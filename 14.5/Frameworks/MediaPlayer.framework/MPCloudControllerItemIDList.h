//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject
{
    ICCloudItemIDList *_cloudItemIDList;
}

+ (id)cloudItemIDListForPlaylist:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ICCloudItemIDList *cloudItemIDList; // @synthesize cloudItemIDList=_cloudItemIDList;
- (id)ICCloudItemIDList;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (id)init;

@end

