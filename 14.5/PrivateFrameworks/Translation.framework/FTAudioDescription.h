//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AudioDescription *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_407e0587)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) unsigned int reserved;
@property(readonly, nonatomic) unsigned int bits_per_channel;
@property(readonly, nonatomic) unsigned int channels_per_frame;
@property(readonly, nonatomic) unsigned int bytes_per_frame;
@property(readonly, nonatomic) unsigned int frames_per_packet;
@property(readonly, nonatomic) unsigned int bytes_per_packet;
@property(readonly, nonatomic) unsigned int format_flags;
@property(readonly, nonatomic) unsigned int format_id;
@property(readonly, nonatomic) double sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;

@end

