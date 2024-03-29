//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/DAMailAccountStreamConsumerFactory-Protocol.h>
#import <Message/MFRequestQueueResponseConsumer-Protocol.h>

@class MFError, NSData, NSString;
@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory>
{
    id <MFDAStreamingContentConsumer> _streamConsumer;
    _Bool _succeeded;
    MFError *_error;
    NSData *_data;
    _Bool _hasLocalCopyOfData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLocalCopyOfData; // @synthesize hasLocalCopyOfData=_hasLocalCopyOfData;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <MFDAStreamingContentConsumer> streamConsumer; // @synthesize streamConsumer=_streamConsumer;
- (id)streamingContentConsumer;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (_Bool)wantsData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

