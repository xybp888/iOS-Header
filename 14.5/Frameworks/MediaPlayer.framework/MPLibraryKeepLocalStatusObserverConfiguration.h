//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject
{
    long long _enableState;
    MPModelObject *_identifyingModelObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
@property(nonatomic) long long enableState; // @synthesize enableState=_enableState;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

