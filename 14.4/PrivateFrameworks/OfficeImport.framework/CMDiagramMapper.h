//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, ODDDiagram;

__attribute__((visibility("hidden")))
@interface CMDiagramMapper : CMDrawableMapper
{
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}

+ (int)diagramTypeFromString:(id)arg1;
- (void).cxx_destruct;
- (id)styleMatrix;
- (id)diagram;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (id)copyDiagramMapperForId:(id)arg1;
- (id)identifierFromLayoutTypeId:(id)arg1;

@end

