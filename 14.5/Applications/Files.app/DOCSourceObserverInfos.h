//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOCConfiguration, DOCSourceObserverToken;

@interface DOCSourceObserverInfos : NSObject
{
    CDUnknownBlockType _block;
    DOCSourceObserverToken *_token;
    DOCConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(copy) DOCConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) DOCSourceObserverToken *token; // @synthesize token=_token;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;

@end

