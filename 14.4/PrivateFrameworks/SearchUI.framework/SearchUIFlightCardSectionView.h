//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/FUFlightViewControllerDelegate-Protocol.h>
#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class FUFlightViewController, NSString, NUIContainerBoxView, SFFlightCardSection;

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate>
{
    FUFlightViewController *_flightViewController;
    unsigned long long _lastSelectedLegIndex;
}

+ (_Bool)fillsBackgroundWithContentForCardSection:(id)arg1;
+ (int)defaultSeparatorStyleForCardSection:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastSelectedLegIndex; // @synthesize lastSelectedLegIndex=_lastSelectedLegIndex;
@property(retain, nonatomic) FUFlightViewController *flightViewController; // @synthesize flightViewController=_flightViewController;
- (void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NUIContainerBoxView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SFFlightCardSection *section; // @dynamic section;
@property(readonly) Class superclass;

@end

