//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;
@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface UIFocusRingClientState : NSObject
{
    id <UIFocusItem> _currentFocusItem;
    NSMutableArray *_activeFocusLayers;
    NSMapTable *_activeFocusLayersToItems;
    NSString *_clientID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSMapTable *activeFocusLayersToItems; // @synthesize activeFocusLayersToItems=_activeFocusLayersToItems;
@property(retain, nonatomic) NSMutableArray *activeFocusLayers; // @synthesize activeFocusLayers=_activeFocusLayers;
@property(nonatomic) __weak id <UIFocusItem> currentFocusItem; // @synthesize currentFocusItem=_currentFocusItem;
- (id)description;
- (id)initWithClientID:(id)arg1;

@end

