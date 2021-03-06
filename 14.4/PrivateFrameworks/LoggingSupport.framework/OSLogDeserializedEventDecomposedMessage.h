//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSLogEventDecomposedMessage.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage
{
    NSDictionary *_backingDict;
    NSArray *_segments;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (id)placeholderAtIndex:(unsigned long long)arg1;
- (id)literalPrefixAtIndex:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)placeholderCount;
- (id)initWithDict:(id)arg1 metadata:(id)arg2;

@end

