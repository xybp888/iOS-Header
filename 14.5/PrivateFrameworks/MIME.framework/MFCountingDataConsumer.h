//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFNullDataConsumer.h>

@interface MFCountingDataConsumer : MFNullDataConsumer
{
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (long long)appendData:(id)arg1;

@end

