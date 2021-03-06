//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelCurator : MPModelPerson
{
}

+ (id)__handle_KEY;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__curatorSubKind_KEY;
+ (id)__curatorKind_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__editorNotes_KEY;
+ (id)__shortName_KEY;
- (id)brandLogoArtworkCatalog;
- (id)editorialArtworkCatalog;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType brandLogoArtworkCatalogBlock; // @dynamic brandLogoArtworkCatalogBlock;
@property(nonatomic) long long curatorKind; // @dynamic curatorKind;
@property(nonatomic) long long curatorSubKind; // @dynamic curatorSubKind;
@property(copy, nonatomic) NSString *editorNotes; // @dynamic editorNotes;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property(copy, nonatomic) NSString *handle; // @dynamic handle;
@property(copy, nonatomic) NSString *shortEditorNotes; // @dynamic shortEditorNotes;
@property(copy, nonatomic) NSString *shortName; // @dynamic shortName;

@end

