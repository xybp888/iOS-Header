//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKCustomFeatureDataSourceObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKCustomFeatureDataSourceObserverThunk : NSObject <VKCustomFeatureDataSourceObserver>
{
    struct LabelCustomFeatureProvider *_observer;
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _dataSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dataSource:(id)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id)arg1 featuresDidChangeForRect:(CDStruct_02837cd9)arg2;
- (void)clearObserver;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 observer:(struct LabelCustomFeatureProvider *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

