//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface CKDProgressTracker : NSObject
{
    _Bool _hasCachedTotalBytes;
    _Bool _hasCachedCompletedBytes;
    double _lastItemPercentage;
    unsigned long long _cachedTotalBytes;
    unsigned long long _cachedCompletedBytes;
    NSMapTable *_completedBytesByItems;
    NSString *_trackingID;
}

+ (unsigned long long)_sizeForItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *trackingID; // @synthesize trackingID=_trackingID;
@property(retain, nonatomic) NSMapTable *completedBytesByItems; // @synthesize completedBytesByItems=_completedBytesByItems;
@property(nonatomic) unsigned long long cachedCompletedBytes; // @synthesize cachedCompletedBytes=_cachedCompletedBytes;
@property(nonatomic) unsigned long long cachedTotalBytes; // @synthesize cachedTotalBytes=_cachedTotalBytes;
@property(nonatomic) _Bool hasCachedCompletedBytes; // @synthesize hasCachedCompletedBytes=_hasCachedCompletedBytes;
@property(nonatomic) _Bool hasCachedTotalBytes; // @synthesize hasCachedTotalBytes=_hasCachedTotalBytes;
@property(nonatomic) double lastItemPercentage; // @synthesize lastItemPercentage=_lastItemPercentage;
- (double)updateProgressWithItem:(id)arg1 progress:(double)arg2;
- (unsigned long long)_updateTotalCompletedBytes;
- (unsigned long long)_updateTotalBytes;
- (void)stopTrackingItems:(id)arg1;
- (void)startTrackingItems:(id)arg1;
- (id)initWithTrackingID:(id)arg1;
- (id)init;

@end

