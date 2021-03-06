//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPMetadataProviderSpecializationContext, NSURL;
@protocol LPMetadataProviderSpecializationDelegate;

__attribute__((visibility("hidden")))
@interface LPMetadataProviderSpecialization : NSObject
{
    id <LPMetadataProviderSpecializationDelegate> _delegate;
    LPMetadataProviderSpecializationContext *_context;
}

+ (unsigned long long)specialization;
+ (_Bool)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) LPMetadataProviderSpecializationContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <LPMetadataProviderSpecializationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *URL;
- (void)cancel;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

