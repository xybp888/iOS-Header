//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, SXDocumentSectionBlueprint, UITraitCollection;
@protocol SXDocumentSectionBlueprint;

@protocol SXDocumentSectionManager <NSObject>
- (double)heightForBlueprint:(SXDocumentSectionBlueprint *)arg1 canvasSize:(struct CGSize)arg2 traitCollection:(UITraitCollection *)arg3;
- (void)applySectionBlueprint:(id <SXDocumentSectionBlueprint>)arg1 identifier:(NSString *)arg2 offset:(struct CGPoint)arg3 size:(struct CGSize)arg4;
@end

