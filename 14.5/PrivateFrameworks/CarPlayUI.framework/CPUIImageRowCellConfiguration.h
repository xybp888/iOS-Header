//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayUI/CPUIImageRowCellConfigurationProtocol-Protocol.h>

@class NSArray, NSString;

@interface CPUIImageRowCellConfiguration : NSObject <CPUIImageRowCellConfigurationProtocol>
{
    _Bool _showActivityIndicator;
    NSString *_title;
    CDUnknownBlockType _selectGridItemBlock;
    CDUnknownBlockType _selectTitleBlock;
    NSArray *_images;
    NSArray *_artworkCatalogs;
}

+ (id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(CDUnknownBlockType)arg3 selectTitleBlock:(CDUnknownBlockType)arg4 showActivityIndicator:(_Bool)arg5;
+ (id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(CDUnknownBlockType)arg3 selectTitleBlock:(CDUnknownBlockType)arg4;
+ (id)configurationWithText:(id)arg1 images:(id)arg2 selectGridItemBlock:(CDUnknownBlockType)arg3 selectTitleBlock:(CDUnknownBlockType)arg4 showActivityIndicator:(_Bool)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(retain, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) CDUnknownBlockType selectTitleBlock; // @synthesize selectTitleBlock=_selectTitleBlock;
@property(copy, nonatomic) CDUnknownBlockType selectGridItemBlock; // @synthesize selectGridItemBlock=_selectGridItemBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

