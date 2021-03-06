//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionResult *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_397abe9f)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSArray *choice_alignments;
@property(readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
@property(readonly, nonatomic) NSArray *post_itn_nbest_choices;
@property(readonly, nonatomic) NSArray *pre_itn_nbest_choices;
@property(readonly, nonatomic) FTRecognitionSausage *post_itn;
@property(readonly, nonatomic) FTRecognitionSausage *pre_itn;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

