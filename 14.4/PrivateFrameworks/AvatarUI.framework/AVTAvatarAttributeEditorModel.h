//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTAvatarAttributeEditorModel : NSObject
{
    NSArray *_categories;
}

+ (id)diffOfSections:(id)arg1 fromSections:(id)arg2;
+ (id)diffOfSectionItems:(id)arg1 fromSectionItems:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (id)differenceFromModel:(id)arg1;
- (id)initWithCategories:(id)arg1;

@end

