//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TPLayoutState;

@interface TPArchivedLayoutState : TSPObject
{
    TPLayoutState *_layoutState;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TPLayoutState *layoutState; // @synthesize layoutState=_layoutState;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)isEqualToArchivedLayoutState:(id)arg1;
- (id)initWithContext:(id)arg1 layoutState:(id)arg2;

@end

