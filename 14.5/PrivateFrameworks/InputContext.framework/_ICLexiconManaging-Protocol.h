//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol _ICLexiconManaging
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)hibernate;
- (void)warmUp;
- (void)unloadLexicons;
- (NSArray *)loadLexiconsUsingFilter:(NSString * (^)(NSString *))arg1;
- (NSArray *)loadLexicons:(NSString * (^)(NSString *))arg1;
- (void)removeContactObserver:(void (^)(NSDictionary *))arg1;
- (void (^)(NSDictionary *))addContactObserver:(void (^)(NSDictionary *))arg1;
@end

