//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)attributedStringFromHTMLFile:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)arg1;
+ (id)normalizedHTMLDocumentFromHTML:(id)arg1;
+ (id)htmlFooter;
+ (id)htmlHeader;
+ (id)attributesDictionaryForType:(id)arg1;
+ (_Bool)typeRequiresMainThread:(id)arg1;
+ (id)documentTypeForType:(id)arg1;
- (id)preferredFileType;
- (_Bool)isContent;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateAttributedString:(CDUnknownBlockType)arg1 fromFile:(id)arg2 forClass:(Class)arg3;
- (void)getFileRepresentationsForSerialization:(CDUnknownBlockType)arg1;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateDataRepresentation:(CDUnknownBlockType)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (void)generateRTFDRepresentation:(CDUnknownBlockType)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;

@end

