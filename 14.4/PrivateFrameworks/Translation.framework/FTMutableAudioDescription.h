//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTAudioDescription.h>

__attribute__((visibility("hidden")))
@interface FTMutableAudioDescription : FTAudioDescription
{
}

@property(nonatomic) unsigned int reserved;
@property(nonatomic) unsigned int bits_per_channel;
@property(nonatomic) unsigned int channels_per_frame;
@property(nonatomic) unsigned int bytes_per_frame;
@property(nonatomic) unsigned int frames_per_packet;
@property(nonatomic) unsigned int bytes_per_packet;
@property(nonatomic) unsigned int format_flags;
@property(nonatomic) unsigned int format_id;
@property(nonatomic) double sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

