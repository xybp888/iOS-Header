//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@protocol AKAnnotationEditor;

@protocol AKAnnotationEditorDelegate <NSObject>

@optional
- (void)didShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)didHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
@end

