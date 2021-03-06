//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPersonNameComponents;
@protocol CNMeCardSharingNameProvider;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingNameFormatter : NSObject
{
    id <CNMeCardSharingNameProvider> _nameProvider;
    NSPersonNameComponents *_nameComponents;
    NSMutableDictionary *_cachedFormattedNames;
}

+ (id)formattedNameFromComponents:(id)arg1 forProvider:(id)arg2 withFormat:(unsigned long long)arg3;
+ (id)formattedNameFromProvider:(id)arg1 withFormat:(unsigned long long)arg2;
+ (id)nameComponentsFromProvider:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cachedFormattedNames; // @synthesize cachedFormattedNames=_cachedFormattedNames;
@property(readonly, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, nonatomic) id <CNMeCardSharingNameProvider> nameProvider; // @synthesize nameProvider=_nameProvider;
- (id)formattedNameWithFormat:(unsigned long long)arg1;
- (id)initWithNameProvider:(id)arg1;

@end

