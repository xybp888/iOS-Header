//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

@class NSDictionary, NSMutableArray, WKInterfaceController;

@interface WKInterfaceTable : WKInterfaceObject
{
    NSDictionary *_rowDescriptions;
    NSMutableArray *_rowControllers;
    NSMutableArray *_rowControllerProperties;
    WKInterfaceController *_controller;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WKInterfaceController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSMutableArray *rowControllerProperties; // @synthesize rowControllerProperties=_rowControllerProperties;
@property(retain, nonatomic) NSMutableArray *rowControllers; // @synthesize rowControllers=_rowControllers;
@property(copy, nonatomic) NSDictionary *rowDescriptions; // @synthesize rowDescriptions=_rowDescriptions;
- (void)scrollToRowAtIndex:(long long)arg1;
- (void)performSegueForRow:(long long)arg1;
- (void)resequenceRowControllerPropertyIndexes;
- (void)removeRowsAtIndexes:(id)arg1;
- (void)insertRowsAtIndexes:(id)arg1 withRowType:(id)arg2;
- (id)rowControllerAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRows;
- (void)setRowTypes:(id)arg1;
- (void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2;
- (void)_getRowControllers:(id)arg1 rowControllerProperties:(id)arg2 forRowTypes:(id)arg3;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;

@end

