//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@class ENNoteRef;

@interface WFEvernoteContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)itemWithNoteRef:(id)arg1 note:(id)arg2;
+ (void)createNoteWithContent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)propertyBuilders;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)canEncodeWithCoder:(id)arg1;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)name;
@property(readonly, nonatomic) ENNoteRef *noteRef;

@end

