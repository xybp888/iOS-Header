//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion;

@interface HMDBackingStoreModelObjectStorageInfo : HMFObject
{
    _Bool _defaultValueSet;
    Class _classObj;
    unsigned long long _logging;
    HMFVersion *_readOnly;
    HMFVersion *_unavailable;
    id _defaultValue;
}

+ (id)deprecatedField;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4 unavailable:(id)arg5;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2;
+ (id)infoWithClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool defaultValueSet; // @synthesize defaultValueSet=_defaultValueSet;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) HMFVersion *unavailable; // @synthesize unavailable=_unavailable;
@property(retain, nonatomic) HMFVersion *readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) unsigned long long logging; // @synthesize logging=_logging;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
- (id)description;
- (id)initWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4 defaultSet:(_Bool)arg5 defaultValue:(id)arg6;

@end

