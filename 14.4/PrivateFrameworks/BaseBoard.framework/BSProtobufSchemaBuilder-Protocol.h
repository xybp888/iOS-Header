//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSArray;

@protocol BSProtobufSchemaBuilder <NSObject>
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2 forTag:(long long)arg3;
- (void)addField:(const char *)arg1 forTag:(long long)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClasses:(NSArray *)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2;
- (void)addField:(const char *)arg1 allowedClasses:(NSArray *)arg2;
- (void)addField:(const char *)arg1;
@end

