//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MFDataHolder : NSObject
{
    NSMutableArray *_datas;
    unsigned long long _length;
}

+ (id)dataHolderWithData:(id)arg1;
+ (id)dataHolder;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
- (void)enumerateConvertingNewlinesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfNewlinesNeedingConversion:(_Bool)arg1;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDatasUsingBlock:(CDUnknownBlockType)arg1;
- (id)data;
- (void)addData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

