//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVMediaSelectionGroup.h>

@class AVAssetWriterInput, AVAssetWriterInputGroupInternal, NSArray;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup
{
    AVAssetWriterInputGroupInternal *_internal;
}

+ (id)assetWriterInputGroupWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;
+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
@property(readonly, nonatomic) NSArray *provisionalInputs;
- (id)initWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;
- (id)options;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
@property(readonly, nonatomic) AVAssetWriterInput *defaultInput;
@property(readonly, nonatomic) NSArray *inputs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)init;

@end

