//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFServiceItem.h>

@interface HFFaucetServiceItem : HFServiceItem
{
}

+ (id)supportedServiceTypes;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)containsActions;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;
- (id)servicesToReadForCharacteristicType:(id)arg1;
- (_Bool)_shouldSubsumeValveInOverallActiveState;

@end

