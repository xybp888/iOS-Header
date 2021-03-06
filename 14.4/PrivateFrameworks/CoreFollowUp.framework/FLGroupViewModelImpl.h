//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLGroupViewModel-Protocol.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel>
{
    NSMutableArray *_mutableItems;
    NSString *_identifier;
    NSString *_rowTitle;
    NSString *_groupTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(copy, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)shouldCoalesceItems;
- (_Bool)restrictionEnabled;
@property(readonly, copy) NSString *description;
- (void)addItem:(id)arg1;
- (id)items;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

