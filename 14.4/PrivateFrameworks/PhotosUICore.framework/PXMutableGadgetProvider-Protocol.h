//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSIndexSet;

@protocol PXMutableGadgetProvider <NSObject>
- (void)removeAllGadgets;
- (void)removeGadgetsAtIndexes:(NSIndexSet *)arg1;
- (void)removeGadgets:(NSArray *)arg1;
- (void)insertGadgets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)addGadgets:(NSArray *)arg1;
@end

