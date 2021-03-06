//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUIUserActionItem, NSArray;

@interface CNUIUserActionListModel : NSObject
{
    CNUIUserActionItem *_defaultAction;
    NSArray *_actions;
    NSArray *_directoryServiceActions;
    NSArray *_foundOnDeviceActions;
}

+ (id)emptyModel;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *foundOnDeviceActions; // @synthesize foundOnDeviceActions=_foundOnDeviceActions;
@property(copy, nonatomic) NSArray *directoryServiceActions; // @synthesize directoryServiceActions=_directoryServiceActions;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNUIUserActionItem *defaultAction; // @synthesize defaultAction=_defaultAction;
- (id)description;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)allActions;
- (id)initWithModel:(id)arg1 actions:(id)arg2;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4;

@end

