//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REFeature;

@interface _REFeatureValuePair : NSObject
{
    REFeature *_feature;
    unsigned long long _value;
    unsigned long long _index;
    NSArray *_rootFeatures;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *rootFeatures; // @synthesize rootFeatures=_rootFeatures;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2 index:(unsigned long long)arg3 rootFeatures:(id)arg4;

@end

