//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, SXMutableDOM;

@protocol SXNamespacedObjectFactory <NSObject>
- (NSString *)createNamespacedReferenceForTextStyle:(NSString *)arg1 component:(NSString *)arg2 DOM:(SXMutableDOM *)arg3;
- (void)createNamespacedTextStylesReferencesForComponent:(NSString *)arg1 DOM:(SXMutableDOM *)arg2;
- (NSString *)createNamespacedReferenceForComponentTextStyle:(NSString *)arg1 component:(NSString *)arg2 DOM:(SXMutableDOM *)arg3;
- (void)createNamespacedComponentTextStylesReferencesForComponent:(NSString *)arg1 DOM:(SXMutableDOM *)arg2;
- (NSString *)createNamespacedReferenceForComponentStyle:(NSString *)arg1 component:(NSString *)arg2 DOM:(SXMutableDOM *)arg3;
- (void)createNamespacedComponentStylesReferencesForComponent:(NSString *)arg1 DOM:(SXMutableDOM *)arg2;
@end

