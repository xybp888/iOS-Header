//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <HomeUI/NSCopying-Protocol.h>

@class HFTriggerBuilder;

@interface HUTriggerBuilderItem : HFItem <NSCopying>
{
    HFTriggerBuilder *_triggerBuilder;
    unsigned long long _nameType;
}

+ (id)settingsURLForForceDisableReasons:(unsigned long long)arg1;
+ (id)_detailedErrorDescriptionForForceDisableReasons:(unsigned long long)arg1 inHome:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long nameType; // @synthesize nameType=_nameType;
@property(readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (unsigned long long)_triggerType;
- (id)_forceDisableReasons;
- (id)_resultsForTriggerConditions;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTriggerBuilder:(id)arg1 nameType:(unsigned long long)arg2;

@end

