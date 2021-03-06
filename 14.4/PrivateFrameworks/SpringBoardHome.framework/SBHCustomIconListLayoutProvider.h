//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListLayoutProvider-Protocol.h>

@class NSDictionary;
@protocol SBIconListLayout;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider>
{
    NSDictionary *_listLayouts;
    id <SBIconListLayout> _defaultLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SBIconListLayout> defaultLayout; // @synthesize defaultLayout=_defaultLayout;
@property(readonly, copy, nonatomic) NSDictionary *listLayouts; // @synthesize listLayouts=_listLayouts;
- (id)layoutForIconLocation:(id)arg1;
- (id)init;
- (id)initWithListLayouts:(id)arg1;
- (id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2;

@end

