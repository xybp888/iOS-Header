//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INImage;
@protocol INKeyImageProducing;

@protocol INKeyImageProducing <NSObject>
@property(readonly) INImage *_keyImage;
- (long long)_compareSubProducerOne:(id <INKeyImageProducing>)arg1 subProducerTwo:(id <INKeyImageProducing>)arg2;

@optional
- (_Bool)_isValidSubProducer:(id <INKeyImageProducing>)arg1;
@end

