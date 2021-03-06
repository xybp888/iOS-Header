//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface AVTStickerTask : NSObject
{
    CDUnknownBlockType _task;
    NSString *_avatarRecordIdentifier;
    NSIndexPath *_indexPath;
    unsigned long long _stickerType;
}

+ (id)stickerTaskForSchedulerTask:(CDUnknownBlockType)arg1 avatarRecordIdentifier:(id)arg2 indexPath:(id)arg3 stickerType:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) NSString *avatarRecordIdentifier; // @synthesize avatarRecordIdentifier=_avatarRecordIdentifier;
@property(readonly, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
- (id)description;
- (id)initWithTask:(CDUnknownBlockType)arg1 avatarRecordIdentifier:(id)arg2 indexPath:(id)arg3 stickerType:(unsigned long long)arg4;

@end

