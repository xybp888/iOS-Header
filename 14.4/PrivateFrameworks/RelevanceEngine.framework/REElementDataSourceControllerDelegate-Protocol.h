//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString, REElement, REElementDataSourceController;

@protocol REElementDataSourceControllerDelegate <NSObject>
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 performBatchUpdates:(void (^)(void))arg2;
- (_Bool)elementDataSourceController:(REElementDataSourceController *)arg1 isElementVisible:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didRefreshElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didReloadElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didRemoveElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didAddElement:(REElement *)arg2 toSection:(NSString *)arg3;
@end

